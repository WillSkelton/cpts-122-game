#include "Game.h"
#include "Background.h"
#include "Player.h"

Game::Game() {
	//initialize the master texture
	if (!this->masterTexture.loadFromFile(".../.../.../Enemies/enemies_spritesheet.png")) {
		std::cout << "Master Texture failed to load. see Game.cpp constructor." << std::endl;
	}


	//runs game automatically
	//gameLoop();
}

//controlls game functionality
void Game::gameLoop() {
	//clock used to check frame times
	sf::Clock clock;
	Player p1;
	float delta_t = 0;

	//create window
	sf::RenderWindow window;
	
	Background background;

	window.create(sf::VideoMode(800, 800), "Game Window");

	

	//disable autorepeating keypress function in Windows machines
	window.setKeyRepeatEnabled(false);

	clock.restart();

	//game loop
	while (window.isOpen()) {
		sf::Event event;
		window.clear(sf::Color::Black);	//clear buffer for next frame

		keystateHandler(window);
		
		//event handler
		while (window.pollEvent(event)) {
			//handles all events (such as mouse clicks or button presses)
			eventHandler(event, window);
			
		}

		//update delta_t in milliseconds();
		delta_t = clock.getElapsedTime().asMilliseconds();

		//update all parts of the screen (player, obstacle list, and )
		background.showBackground(window);

		//check collisions (player with obstacle list)
		


		window.display();	//display next frame

		//reset time for this frame
		clock.restart();
	}
}

//handles all events (such as mouse clicks or button presses)
void Game::eventHandler(sf::Event &event, sf::RenderWindow &window) {

	//we have to handle each event by TYPE, since otherwise we can run into serious errors
	switch (event.type) {

		//handles user closing window
		case sf::Event::Closed:
			window.close();
			break;
		case sf::Event::KeyPressed:
			if (event.key.code == sf::Keyboard::Space)
			{
				//Flip character and invert gravity

				
			}
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