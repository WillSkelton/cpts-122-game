#include "Background.h"

Background::Background(){
	
	if (!this->texture.loadFromFile("../../Enemies/Background.png")) {
		std::cout << "error" << std::endl;

	}
	else {
		this->sprite1.setTexture(texture);
		this->sprite2.setTexture(texture);

	}
}

//DTOR
Background::~Background(){}

void Background::showBackground(sf::RenderWindow &window){
		
	window.draw(this->sprite1);

}