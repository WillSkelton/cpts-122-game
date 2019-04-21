#include "Game.h"

Game::Game() {
	//runs game automatically
	gameLoop();
}

//controlls game functionality
void Game::gameLoop() {

	//create window
	sf::RenderWindow window;
	window.create(sf::VideoMode(800, 800), "Game Window");

	

	//disable autorepeating keypress function in Windows machines
	window.setKeyRepeatEnabled(false);



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

		window.display();	//display next frame
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