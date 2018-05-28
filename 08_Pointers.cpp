#include <iostream>

//Pointers are just an adress of memory
int pointers() 
{
	//void* ptr = NULL;
	//int* ptr = NULL;
	int* ptr = nullptr;

	int var = 4;
	ptr = &var;
	std::cout << "The value of the variable is: " << var << std::endl;
	std::cout << "The value of the pointer is: " << *ptr << std::endl;

	*ptr = 8;
	std::cout << "The value of the variable is: " << var << std::endl;
	std::cout << "The value of the pointer is: " << *ptr << std::endl;

	char* buffer = new char[8]; //Allocate 8bytes of memory (we know that char is 1 byte)
	memset(buffer, 0, 8); //put at buffer direction, the value of 0 and it will fill 8 bytes

	char** ptrptr = &buffer;//a pointer of a pointer

	delete[] buffer;

	std::cin.get();
	return 1;
}