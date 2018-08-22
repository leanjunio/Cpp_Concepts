#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	std::cout << Multiply(a, b) << std::endl;
}

int main()
{
	MultiplyAndLog(3, 2);
	MultiplyAndLog(2, 7);
	std::cin.get();
}