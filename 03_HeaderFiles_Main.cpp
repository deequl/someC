#include <iostream>
#include "Common.h"
#include "Log.h"

int headerFiles()
{
	initLog();
	log("Hello World");
	std::cin.get();

	return 0;
}