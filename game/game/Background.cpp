#include "Background.h"

Background::Background(){
	
	if (!this->texture.loadFromFile("../../Enemies/Background.png")) {
		std::cout << "ERROR: CAN'T LOAD BACKGROUND IMAGE" << std::endl;

	}
	else {
		this->sprite1.setTexture(texture);
		this->sprite2.setTexture(texture);

		this->sprite1.scale(0.74, 0.74);
		this->sprite2.scale(0.74, 0.74);

		this->sprite1.setPosition(sf::Vector2f(0, 0));
		this->sprite2.setPosition(sf::Vector2f(800, 0));

	}
}

// DTOR
Background::~Background(){
	
}

void moveLeft(float delta_t) {

}



void Background::showBackground(sf::RenderWindow &window){
		
	window.draw(this->sprite1);
	window.draw(this->sprite2);

}


Sprite * Background::getSprite1(void) {
	return &(this->sprite1);
}

Sprite * Background::getSprite2(void) {
	return &(this->sprite2);

}
