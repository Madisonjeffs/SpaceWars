#pragma once
#include "Player.h"


class Game
{
private:
	//Create window dynamically
	sf::RenderWindow * window;

	//Private Functions
	void intializeWindow();

public:
	Game();
	virtual ~Game();

	

	//Functions





	void run();


	void update();
	void render();


};

