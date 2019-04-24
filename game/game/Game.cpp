#include "Game.h"
#include "Background.h"
#include "madBlock.h"
#include "Slime.h"


Game::Game() {
	//initialize the master texture
	if (!this->masterTexture.loadFromFile("enemies_spritesheet.png")) {
		std::cout << "Master Texture failed to load. see Game.cpp constructor." << std::endl;
	}
	if (!this->gameOver.loadFromFile("gameover.png")) {
		std::cout << "GameOver Texture failed to load. see Game.cpp constructor." << std::endl;
	}
	//runs game automatically
	gameLoop();
}

//controlls game functionality
void Game::gameLoop() {
	//clock used to check frame times
	sf::Clock clock;
	float delta_t = 0;

	float YEEHAW = 0.1;

	//create window
	sf::RenderWindow window;
	Player player;
	Background background;
	Slime slime1(masterTexture);
	Slime slime2(masterTexture);
	Slime slime3(masterTexture);
	Slime slime4(masterTexture);

	MadBlock mb1(masterTexture);
	MadBlock mb2(masterTexture);
	MadBlock mb3(masterTexture);
	MadBlock mb4(masterTexture);

	//handle the game_over screen
	bool game_over = false;
	sf::Sprite gameOverSprite;
	gameOverSprite.setTexture(this->gameOver);
	gameOverSprite.setTextureRect(sf::IntRect(0, 0, 800, 800));
	gameOverSprite.setPosition(90,50);

	//create list of enemies
	std::vector<Obstacle *> enemyList;
	enemyList.push_back(&slime1);
	enemyList.push_back(&slime2);
	enemyList.push_back(&slime3);
	enemyList.push_back(&slime4);
	enemyList.push_back(&mb1);
	enemyList.push_back(&mb2);
	enemyList.push_back(&mb3);
	enemyList.push_back(&mb4);


	window.create(sf::VideoMode(800, 800), "Game Window");


	//disable autorepeating keypress function in Windows machines
	window.setKeyRepeatEnabled(false);

	clock.restart();

	//game loop
	while (window.isOpen()) {
		sf::Event event;
		window.clear(sf::Color::White);	//clear buffer for next frame

		keystateHandler(window);
		
		//event handler
		while (window.pollEvent(event)) {
			//handles all events (such as mouse clicks or button presses)
			eventHandler(player, event, window);
			
		}

		//update delta_t in milliseconds();
		delta_t = (clock.getElapsedTime().asMilliseconds());

		if (!game_over) {
			//update all parts of the screen (player, obstacle list, and )
			background.showBackground(window);
			player.draw(window);

			slime1.showSlime(window);
			slime2.showSlime(window);
			slime3.showSlime(window);
			slime4.showSlime(window);

			mb1.showMadBlock(window);
			mb2.showMadBlock(window);
			mb3.showMadBlock(window);
			mb4.showMadBlock(window);


			//move all items across screen
			background.moveLeft(YEEHAW, window);
			player.movePlayer(1);
			mb1.moveLeft(YEEHAW);
			mb2.moveLeft(YEEHAW);
			mb3.moveLeft(YEEHAW);
			mb4.moveLeft(YEEHAW);

			slime1.moveLeft(YEEHAW);
			slime2.moveLeft(YEEHAW);
			slime3.moveLeft(YEEHAW);
			slime4.moveLeft(YEEHAW);
		}

		//check collisions (player with obstacle list)
		for (int i = 0; i < enemyList.size(); ++i) {
			if (player.getRect().intersects(enemyList[i]->getRect())) {
				game_over = true;
				
				window.draw(gameOverSprite);
			}
		}
		


		window.display();	//display next frame

		//reset time for this frame
		clock.restart();


		YEEHAW = (YEEHAW <= 15) ? YEEHAW + 0.005 : 15;
	}
}

//handles all events (such as mouse clicks or button presses)
void Game::eventHandler(Player & player, sf::Event &event, sf::RenderWindow &window) {

	//we have to handle each event by TYPE, since otherwise we can run into serious errors
	switch (event.type) {

		//handles user closing window
		case sf::Event::Closed:
			window.close();
			break;
		case sf::Event::KeyPressed:
			if (event.key.code == sf::Keyboard::Space)
				player.flip();
			if (event.key.code == sf::Keyboard::Escape)
				window.close();
			break;
		//we want to do nothing if there is a undefined event
		default:
			break;
	}
}

void Game::keystateHandler(sf::RenderWindow &window) {
	//move up
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
		//std::cout << "'space' key was pressed." << std::endl;
	}
	
}