#include <iostream>
#include <vector>

// Replace with Lambda (1.)
//void PrintValue(int value)
//{
//	std::cout << "Value: " << value << std::endl;
//}

void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);
}

int main()
{
	std::vector<int> values = { 1, 5, 4, 2, 3 };

	// 1. ForEach(values, PrintValue);
	// 2. Using Lambda
	ForEach(values, [](int value) { std::cout << "Value: " << value << std::endl; });
	std::cin.get();
}