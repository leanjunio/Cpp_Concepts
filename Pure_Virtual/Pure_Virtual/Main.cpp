#include <iostream>
#include <string>


class Printable
{
public:
	virtual std::string GetClassName() = 0;
};
/*
 Interface 
	- Class that only contains unimplemented methods
	- Acts as a template of sorts
	- Interfaces cannot be instantiated
*/

class Entity : public Printable
{
public:
	// =0 makes the method a pure virtual function
	virtual std::string GetName() { return "Entity"; };
	std::string GetClassName() { return "" }
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		: m_Name(name) {}

	std::string GetName() override { return m_Name; }
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

void Print(Printable obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	PrintName(e);

	Player* p = new Player("Cherno");
	PrintName(p);

	std::cin.get();
}