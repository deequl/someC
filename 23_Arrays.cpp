#include <iostream>
#include <array>

class Entity
{
public:
	int anotherExample[5];

	Entity() {
		for (int i = 0; i<5; i++)
		{
			anotherExample[i] = 2;
		}
	}
};

int arrays()
{
	int ar[5]; //array of 5 integers
	ar[0] = 2;
	ar[4] = 5;
	
	int a = ar[0];
	int* ptr = ar;

	//Are the same
	ar[2] = 5;
	*(ptr + 2) = 5; 
	//

	std::cout << a << std::endl;
	std::cout << ar[4] << std::endl;

	for (int i = 0; i < 5; i++) 
	{
		ar[i] = 2;
	}

	int example[5]; //create on the stack, It will be destroy at the end of the bracket
	for (int i = 0; i<5; i++)
	{
		example[i] = 2;
	}
	int count = sizeof(example) / sizeof(int);
	//			size of example / size of the data type int
	
	int* anotherAr = new int[5]; //create on the heap, It will be alive until destroy or program ends
	for (int i = 0; i<5; i++)
	{
		anotherAr[i] = 2;
	}
	//here we can not do count because its on the heap
	//that is because it's sizeof pointer not of the array 

	delete[] anotherAr; // destroy anotherAr

	Entity e;

	std::array<int, 5> anotherWithInclude;

	std::cin.get();
}