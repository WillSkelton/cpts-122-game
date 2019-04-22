#include "Player.h"

Player1::Player1() //instantiate sprite
{
	if (!pTexture.loadFromFile("../../cpts-122-game/Player/Player.png"))
	{
		// error...
		cout << "Player image load error" << endl;
	}
	else
	{
		pSprite.setTexture(pTexture);
	}
}
void Player1::setposition(int x, int y)
{

}

Rect<int> Player1::getRect() // generate hitbox
{
	Rect<int> sol;
	return sol;
}
void Player1::move_player(float delta_t, sf::RenderWindow &window) // update position
{

}

void Player1::gravity_control()
{

}