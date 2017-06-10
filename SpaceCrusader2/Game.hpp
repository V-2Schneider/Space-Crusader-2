#pragma once
#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/System/Time.hpp>
#include <SFML/Graphics.hpp>

class Game {
public:
	Game();
	void run();

private:
	void processEvents();
	void update(sf::Time);
	void render();
	void handlePlayerInput(sf::Keyboard::Key, bool);

	bool mIsMovingUp;
	bool mIsMovingDown;
	bool mIsMovingLeft;
	bool mIsMovingRight;

	static const float Game::PlayerSpeed;
	static const sf::Time Game::TimePerFrame;

	sf::RenderWindow mWindow;
	sf::Sprite mPlayer;
	sf::Texture mTexture;
};

#endif 