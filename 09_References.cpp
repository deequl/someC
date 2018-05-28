#include <iostream>

void increment(int* value)
{
	//value++;	//It just increment the adress
	(*value)++;
}

void incrementWithReferences(int& value)
{
	value++;
}

int references()
{
	int a = 5;
	int& ref = a;	//	int* b = &a;

	ref = 2;
	std::cout << "Value of the variable a: " << a << std::endl;
	std::cout << "Value of the reference ref: " << ref << std::endl;

	std::cout << "==============="<< std::endl;
	increment(&a);
	std::cout << "Increment(a): " << a << " ('a' value change without return stament on increment method)"<< std::endl;

	std::cout << "===============" << std::endl;
	incrementWithReferences(a);
	std::cout << "incrementWithReferences(a): " << a << " ('a' value change without return stament on incrementWithReferences method)" << std::endl;

	std::cout << "===============" << std::endl;


	std::cin.get();
	return 1;
}

