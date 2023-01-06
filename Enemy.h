#pragma once
#include "imgui.h"
#include "imgui-SFML.h"
#include "SFML/Graphics.hpp"
#include "Animation.h"


class Enemy
{

private:
	float positonX;
	float positonY;

	float width;
	float height;

	sf::Texture texture;

public:
	Animation animation;

	
	sf::RectangleShape enemyRect;

	float velX;
	
	float getPositionX();
	float getPositionY();
	void setPosition(float x, float y);

	float getWidth();
	float getHeight();
	void setSize(float w, float h);

	void setEnemyShape();
	void setTexture();

	void draw(sf::RenderWindow& window);


	Enemy(float positionX, float positionY, float width, float height, std::string fileName, int incrementFrame, int endPoint); 
};

