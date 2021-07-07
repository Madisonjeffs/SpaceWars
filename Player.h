#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFMl/System.hpp>


class Player
{
private:
	sf::Sprite sprite;
	sf::Texture texture;




public:
	Player();
	virtual ~Player();

	//Functions
	void update();
	void render(sf::RenderTarget& target);

};

