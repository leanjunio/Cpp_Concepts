#include <iostream>
#include <string>

class Entity
{
	std::string m_Name;
public:
	Entity()
		: m_Name("Unknown")
	{
	}

	Entity(const std::string& name)
		: m_Name(name)
	{
	}

	const std::string& GetName() const { return m_Name; }

private:

};

int main()
{
	Entity e0;
	std::cout << e0.GetName() << std::endl;
	Entity e1("Lean");
	std::cout << e1.GetName() << std::endl;
	std::cin.get();
}