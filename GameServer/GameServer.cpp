// GameServer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GameServer.h"

GameServer::GameServer()
{

}

void GameServer::run()
{

}
void GameServer::draw()
{
		
}
bool GameServer::update(sf::Time deltaTime)
{
	return true;
}
bool GameServer::handleEvent(const sf::Event& event)
{
	return true;
}

void GameServer::updateBroadcastMessage(sf::Time elapsedTime)
{

}
void GameServer::handlePacket(sf::Int32 packetType, sf::Packet& packet)
{

}

int main()
{
	GameServer server;
	server.run();
    return 0;
}

