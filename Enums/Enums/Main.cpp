#include <iostream>

enum Example
{
	// default values: A = 0, B = 1, C = 2, ... 
	// if the first value is 5, the rest adds 1 to the 5
	// A = 5, B, C, D will be 6, 7, and 8
	A = 0, B = 2, C = 6
};

int main()
{

	Example value = B;

	if (value == 1)
	{
		// Do something here
	}

	std::cin.get();
}