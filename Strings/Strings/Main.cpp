#include <iostream>
#include <string>

void PrintString(const std::string& string)
{
	//string += "h"; - error because reference
	std::cout << string << std::endl;
}

int main()
{
	// C-style string - not heap allocated
	// "..." are const char arrays
	const char* name = "Cherno";

	// C++ std::string
	std::string name2 = "Lean";

	// appending strings
	// std::string name2 = "Lean" + "last name"; - ERROR "Lean" and "last name" are 2 const char arrays

	// FIX
	name2 += "LAST NAME";

	// to check if a string contains something
	bool contains = name2.find("an") != std::string::npos;

	std::cout << name2 << std::endl;

	std::cin.get();
}