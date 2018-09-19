#include <iostream>
#include <vector>
#include <string>

class Player
{
	std::string m_FirstName;
public:
	Player(const std::string& first)
		: m_FirstName{ first }
	{
		std::cout << this << " Player::Player()" << std::endl;
	}
	~Player()
	{
		std::cout << this << " Player::~Player()" << std::endl;
	}
	void display()
	{
		std::cout << this << " " << this->m_FirstName << std::endl;
	}
	std::string& getName()
	{
		return m_FirstName;
	}
};

class Team
{
	std::string teamName;
	std::vector<Player> Players;
public:
	Team(std::string team = "NBA Team") 
		: teamName{team}
	{
		std::cout << "Created Team: " << this << std::endl;
	}
	~Team() 
	{
		std::cout << "Destroyed Team: " << this << std::endl;
	}
	Team(const Team& team)
		// Copy constructor for copying teams
	{
		*this = team;
	}
	Team& operator=(const Team& other)
	{
		if (this != &other)
		{
			this->teamName = { other.teamName };
			this->Players = other.Players;
		}

		return *this;
	}
	void addPlayer(Player& player)
	{
		Players.push_back(player);
	}
	void displayPlayers()
	{
		std::cout << "Team Name: " << teamName << std::endl;
		for (size_t i = 0; i < Players.size(); i++)
			std::cout << Players[i].getName() << std::endl;
	}
};

int main()
{
	{
		Player lean("Lean");
		Player joe("Joe");

		Team hawks("Hawks");

		// Fill hawks with players
		hawks.addPlayer(lean);
		hawks.addPlayer(joe);
		hawks.displayPlayers();

		Team lakers = hawks;

		lakers.displayPlayers();
	}

	std::cin.get();
}