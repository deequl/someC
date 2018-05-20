#include <iostream>

int variables() 
{
	//type variable byte large 
	char a = 1;
	short s = 2;

	int variable = 4; // -2b -> 2b
	std::cout << variable << std::endl; //'4' printed

	unsigned int unvariable = 4;
	long l = 8;
	long long ll = 16;

	float f = 4.0f;
	double d = 8.0;

	bool b = true; //1=true, 0=false 
	std::cout << b << std::endl; // '1' printed
	std::cout << sizeof(b) << std::endl; // '1' printed

	a = 65;
	std::cout << a << std::endl; // 'A' printed
	std::cout << sizeof(a) << std::endl; // '1' printed

	std::cin.get();

	//Pointers  //  bool*
	//References  //  bool& 
	return 0;
}