#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>
#include <iostream>

using sf::Rect;
using sf::IntRect;
using sf::Sprite;
using sf::Texture;
using sf::Vector2f;
using std::cout;
using std::cin;
using std::endl;


class Player
{
public:
	Player();
	Rect<int> getRect(Vector2f &position, const Vector2f &size);
	Sprite & getSprite();
	void move_player(float delta_t, sf::RenderWindow &window);
	void gravity_control(Rect<int> *player, Sprite *pSprite, Texture *pTexture);



private:
	Rect<int> player;
	Sprite pSprite;
	Texture pTexture;

	int x_pos;
	int y_pos;

	int width;
	int length;

	void setposition(Rect<int> *player, Sprite *pSprite, Texture *pTexture);

};

#endif