#include "Player.h"

Player::Player() //instantiate sprite
{
	if (!pTexture.loadFromFile("../../../../cpts-122-game/Player/Player.png"))
	{
		// error...
		cout << "Player image load error" << endl;
	}
	else
	{
		pSprite.setTexture(pTexture);
	}
}

Rect<int> Player::getRect() // generate hitbox
{
	Rect<int> sol;
	return sol;
}
void Player::move_player(float delta_t, sf::RenderWindow &window) // update position
{

}

void Player::gravity_control()
{

}