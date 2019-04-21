#include "Header.h"

using sf::Sprite;
using sf::Texture;

class Background {

// CTOR
public:
	Background();

	//DTOR
	~Background();

	void showBackground(sf::RenderWindow &window);

private:

	Texture texture;

	Sprite sprite1;
	Sprite sprite2;

};