#include "Game.h"

//Private Functions
void Game::intializeWindow()
{

	this->window = new sf::RenderWindow(sf::VideoMode(1920, 1080), "SpaceWars", sf::Style::Close | sf::Style::Titlebar);

	this->window->setFramerateLimit(144);

	this->window->setVerticalSyncEnabled(false);



}


//Constructor
Game::Game()
{



	this->intializeWindow();




}


//Destructor
Game::~Game()
{

	delete this->window;


}


//Functions
void Game::run()
{
	while (this->window->isOpen())
	{

		this->update();
		this->render();

	}
}

void Game::update()
{
	sf::Event e;
	while (this->window->pollEvent(e))
	{
		if (e.Event::type == sf::Event::Closed)
			this->window->close();

		if (e.Event::KeyPressed&& e.Event::key.code == sf::Keyboard::Escape)
			this->window->close();
		
	}


}


void Game::render()
{

	this->window->clear();


	//Draw all things


	this->window->display();

}