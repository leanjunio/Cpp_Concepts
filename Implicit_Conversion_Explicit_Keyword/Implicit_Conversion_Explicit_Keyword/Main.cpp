#include <iostream>
#include <string>

class Player
{
	std::string m_Name;
	int m_Age;
public:
	Player(const std::string& name)
		: m_Name(name), m_Age(-1)
	{
	}

	explicit Player(int age)
		: m_Name("Unknown"), m_Age(age)
	{
	}
};

void printPlayer(const Player& player)
{
	// do stuff printing
}

int main()
{
	// Implicit conversion due to Player(int age) constructor
	/*printPlayer(24); fails due to explicit keyword on ctor*/

	printPlayer(std::string("Lean"));
	printPlayer(Player("Lean"));

	// The compiler is automatically constructing a Player object from the 24 because Player(int age) exists
	//Player b = 24 fails due to explicit keyword on ctor;
	Player b(24); // Fixed...must be explicitly declared with a constructor
	std::cin.get();
}
