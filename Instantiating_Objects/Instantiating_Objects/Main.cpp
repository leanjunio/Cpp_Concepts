#include <iostream>
#include <string>

class Entity
{
	std::string m_Name;
public:
	Entity()
		: m_Name{"Unknown"}
	{}

	Entity(const std::string& name)
		: m_Name{name}
	{}

	const std::string& getName() const { return m_Name; }
};

int main()
{
	// Creating an object on the stack
	Entity entity1("Lean Junio");
	std::cout << entity1.getName() << std::endl;

	// Creating an object on the heap
	Entity* e;

	{
		Entity* entity = new Entity("John Doe");
		e = entity;
		std::cout << entity->getName() << std::endl;
	}

	std::cin.get();
	delete e;

	
}