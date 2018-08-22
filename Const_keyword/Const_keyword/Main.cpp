#include <iostream>

class Entity
{
private:
	int m_X, m_Y;
public:

	// const makes this method a read-only method
	int GetX() const
	{
		return m_X;
	}

	int SetX(int x)
	{
		m_X = x;
	}
};

void PrintEntity(const Entity& e)
{
	std::cout << e.GetX() << std::endl;
}
int main()
{
		
	Entity e;
	const int MAX_AGE = 90;

	int* a = new int;

	std::cin.get();
}