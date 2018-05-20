#include "Log.h"
#include <iostream>

void initLog()
{
	log("Initializing Log");
}

void log(const char* message)
{
	std::cout << message << std::endl;
}
