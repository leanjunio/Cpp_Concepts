#include <iostream>
#include "Log.h"

void InitLog()
{
	Log("Called InitLog");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}