#include <iostream>
#include "Icecream.h"

Icecream::Icecream()
	: _flavor("Vanilla")
	, _style("Swirl")
{
}

Icecream::Icecream(std::string f, std::string s)
	: _flavor(f)
	, _style(s)
{
}

void Icecream::display() const
{
	std::cout << "Your Ice cream tastes like " << _flavor << std::endl;
	std::cout << "It comes as a " << _style << std::endl;
}
