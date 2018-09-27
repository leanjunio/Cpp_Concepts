#pragma once
#include <string>

class Icecream
{
	std::string _flavor;
	std::string _style;
public:
	Icecream();
	Icecream(std::string, std::string);
	void display() const;
};

