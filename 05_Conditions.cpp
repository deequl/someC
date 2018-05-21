#include <iostream>

int conditions() 
{
	int x = 4;
	bool comparisonResult = x == 4;

	if (comparisonResult)
	{
		std::cout << "ComparisonResult is 4" << std::endl;
	}

	if (1) std::cout << "1.. is True and 0 is False" << std::endl;

	const char* ptr = "Hello";

	if (ptr) 
	{ 
		std::cout << ptr << std::endl; 
	}
	else 
	{
		std::cout << "Pointer is null" << std::endl;
	}
	
	std::cin.get();

	return 1;
}