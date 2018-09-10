#include <iostream>
#include <string>

class Player
{
public:
	Player()
	{
		std::cout << "Created Player!" << std::endl;
	}

	~Player()
	{
		std::cout << "Destroyed Player!" << std::endl;
	}
};

class ScopedPointer
{
	Player* m_Ptr;
public:
	ScopedPointer(Player* ptr)
		: m_Ptr(ptr)
	{
	}

	~ScopedPointer()
	{
		// Ensures that the pointer gets deleted once it goes out of scope
		delete m_Ptr;
	}
};

int main()
{
	{
		// Stack variables get destroyed when they go out of scope
		Player p;
		// Also allocated on the stack
		ScopedPointer p = new Player();
		
		// Allocated on the heap
		Player* _p = new Player();
	}
	std::cin.get();
}