#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>
#include <iostream>

using sf::Rect;
using sf::IntRect;
using sf::Sprite;
using sf::Texture;


class Player : public Obstacle
{
public:
	Player();
	virtual sf::Rect<int> getRect() = 0;
	virtual void update_pos(float delta_t,sf::RenderWindow &window);
	void gravity_control();


private:
	Rect<int> player;
	Sprite pSprite;
	Texture pTexture;

	int x_pos;
	int y_pos;

	int width;
	int length;

};

Player::Player()
{

}

sf::Rect<int> getRect()
{

}
void Player::update_pos(float delta_t, sf::RenderWindow &window)\
{

}

void Player::gravity_control()
{

}
#endif