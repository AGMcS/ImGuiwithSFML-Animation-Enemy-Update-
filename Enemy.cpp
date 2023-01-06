#include "Enemy.h"

float Enemy::getPositionX()
{
	return positonX;
}

float Enemy::getPositionY()
{
	return positonY;
}

void Enemy::setPosition(float x, float y)
{
	this->positonX = x;
	this->positonY = y;
}

float Enemy::getWidth() {
	return width;
}

float Enemy::getHeight() {
	return height;
}

void Enemy::setSize(float w, float h)
{
	this->width = w;
	this->height = h;
}

void Enemy::setEnemyShape()
{
		enemyRect.setSize({ width, height });
		enemyRect.setPosition({ positonX, positonY});
}

void Enemy::setTexture()
{
		texture.loadFromFile(animation.fileName);
}

void Enemy::draw(sf::RenderWindow& window)
{
	window.draw(enemyRect);
}

Enemy::Enemy(float positionX, float positionY, float width, float height, std::string fileName, int incrementFrame, int endPoint)
{
	setPosition(positionX, positionY);
	setSize(width, height);
	animation.setFileName(fileName);

	animation.setAnimation(0, 0, width, height, endPoint);

	setTexture();
	enemyRect.setTexture(&texture);
	enemyRect.setOrigin(24, 32);

	setEnemyShape();
}


