#pragma once
#include "SFML\Graphics.hpp"
#include "SFML\Network.hpp"
#include <iostream>
#include <memory>
#include "Player.h"

class GameServer
{

private:
	sf::RenderWindow window;

private:
	typedef std::unique_ptr<Player> playerPtr;

private:
	std::map<int, playerPtr> players;
	std::vector<sf::Int32> localPlayerIdentifiers;
public:
	GameServer();
	void run();
	void draw();
	bool update(sf::Time deltaTime);
	bool handleEvent(const sf::Event& event);
private:
	void updateBroadcastMessage(sf::Time elapsedTime);
	void handlePacket(sf::Int32 packetType, sf::Packet& packet);
};
