#include <iostream>
#include <string>

// private: Only the class its declared in can access the method or property
// protected: Only the base class and derived class can access the method or property
// public: Everybody can access

class Entity
{
private:
	int X, Y;
protected:
	int A, B;
public:
	Entity()
	{
		X = 0;
	}
	void Print()
	{
		std::cout << X << "," << Y << std::endl;
	}
};

class Player : public Entity
{
public:
	Player()
	{
		// Accessible via protected
		A = 5;
		B = 10;
		std::cout << "Player Class - A: " << A << " B: " << B << std::endl;
	}
};

int main()
{
	Entity e;
	Player p;

	// Both are accessible because they are public in class Entity
	e.Print();
	p.Print();

	// Inaccessible because A and B are protected via Entity
	//std::cout << p.A << p.B << std::endl;

	std::cin.get();
}