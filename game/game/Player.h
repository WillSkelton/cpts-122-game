#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>
#include <iostream>

using sf::Rect;
using sf::IntRect;
using sf::Sprite;
using sf::Texture;
using std::cout;
using std::cin;
using std::endl;


class Player1
{
public:
	Player1();
	Rect<int> getRect();
	void setposition(int x, int y);
	void move_player(float delta_t, sf::RenderWindow &window);
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

#endif