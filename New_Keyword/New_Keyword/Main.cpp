#include <iostream>
#include <string>

using String = std::string;

class Player
{
	String m_Name;
public:
	Player()
		: m_Name("Unknown")
	{
	}

	Player(const String& name)
		: m_Name(name)
	{
	}

	const String& GetName() const
	{
		return m_Name;
	}
};

int main()
{	
	// Normal
	int a = 2;				

	// dynamic allocation in the heap, take out [10] for a single element
	// allocates 10 * 4 (sizeof int) = 40
	// new returns a pointer to a block of memory containing 40 contiguous bytes
	// 
	int* b = new int[10];	

	// Same case as above
	Player* p = new Player[50];

	// Allocates memory for p1 Player but also calls the Player() ctor
	Player* p1 = new Player();

	// Allocates memory for p2 Player but DOES NOT CALL the Player() ctor
	Player* p2 = (Player*)malloc(sizeof(Player));

	// Everytme new is used, delete must also be used
	// NOTE: delete also calls the destructor
	delete[] b;
	delete[] p;
	delete p1;
	delete p2;

	std::cin.get();
}