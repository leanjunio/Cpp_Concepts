#include <iostream>
#include "Log.h"

int main()
{
	for (int i = 0; i < 5; i++)
	{
		if (i > 2)
			continue;
		Log("Hello World");
	}

	std::cin.get();
}