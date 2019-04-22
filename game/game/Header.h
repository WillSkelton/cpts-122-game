#pragma once
#ifndef HEADER_H
#define HEADER_H

#include <SFML/Graphics.hpp>
#include <iostream>

#define VELOCITY -0.5;
#define ACCELERATION  3.27; // 1/3 earth gravity of 9.81


//class Player{
//public:
//	Player(float x_pos, float y_pos) : position(x_pos, y_pos) {
//		m_shape.setSize(sf::Vector2f(100, 100));
//		m_shape.setFillColor(sf::Color::Black);
//		m_shape.setPosition(sf::Vector2f(x_pos, y_pos));
//
//		// Constants at the moment (initial velocity up, then gravity pulls down)
//		velocity = sf::Vector2f(0, VELOCITY);
//		acceleration = sf::Vector2f(0, ACCELERATION); //Earth's acceleration
//	}
//
//	void Step() { // TODO: use delta time
//		float x, float y;
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
//			velocity.y -= 1;
//		}
//
//		velocity.x += acceleration.x;
//		velocity.y += acceleration.y;
//		x += velocity.x; // * delta t
//		y += velocity.y;
//
//		m_shape.setPosition(x, y);
//	}
//
//	void Draw(sf::RenderWindow &window) {
//		window.draw(m_shape);
//	}
//
//private:
//	sf::RectangleShape m_shape;
//	sf::Vector2f position, velocity, acceleration;
//}

#endif // !HEADER_H