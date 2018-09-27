#include <iostream>
#include "Icecream.h"

int main()
{
	Icecream chocolate("chocolate", "swirl");
	chocolate.display();

	Icecream vanilla("vanilla", "cone");
	vanilla.display();

	std::cin.get();
}