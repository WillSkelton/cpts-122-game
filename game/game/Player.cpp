#include "Player.h"

Player::Player(const Vector2f &position, const Vector2f &size) //instantiate sprite
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
Sprite & Player::getSprite()
{
	return this->pSprite;
}

void Player::setposition(Rect<int> *player, Sprite *pSprite, Texture *pTexture)
{
	
}

Rect<int> Player::getRect(const Vector2f &position, const Vector2f &size) // generate hitbox
{
	Rect<int> sol;
	return sol;
}
void Player::move_player(float delta_t, sf::RenderWindow &window) // update position
{

}

void Player::gravity_control(Rect<int> *player, Sprite *pSprite, Texture *pTexture)
{

}