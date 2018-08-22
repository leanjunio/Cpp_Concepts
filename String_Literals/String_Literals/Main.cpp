#include <iostream>
#include <string>

#include <stdlib.h>

int main()
{
	const char name[8] = "Che\0rno";
	const wchar_t* name2 = L"Cherno";
	
	const char16_t* name3 = u"Cherno";
	const char32_t* name4 = U"Cherno";

	std::cout << strlen(name) << std::endl; // 3 -  only counts till the 00
	std::cin.get();
}