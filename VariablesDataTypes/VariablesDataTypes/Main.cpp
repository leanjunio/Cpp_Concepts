# include <iostream>

int main()
{
	char a = 65;
	float variable = 5.5f;
	double var = 5.2;
	bool Boolean = 1;

	// If a char is passed to cout, it will treat the variable like a character

	std::cout << a << std::endl; // prints out 'A'
	std::cout << variable << std::endl; // prints out 5.5
	std::cout << sizeof(bool) << std::endl; // prints out 5.5


	std::cin.get();
}