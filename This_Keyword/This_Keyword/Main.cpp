#include <iostream>
#include <string>

void PrintPlayer(Player* p);
void PrintPlayer(const Player& p);

class Player
{
public:
	int x, y;
	Player(int x, int y)
	{
		/*
		The longer way of 'this'
		Player* p = this;
		p->x = x;
		*/

		this->x = x;
		this->y = y;

		PrintPlayer(this);
		PrintPlayer(*this);
	}

	int GetX() const
	{
		const Player* p = this; // this is what's happening within a method
	}
};

void PrintPlayer(Player* p)
{
	// print
}

void PrintPlayer(const Player& p)
{
	// print
}

int main()
{
	std::cin.get();
}