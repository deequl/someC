#include <iostream>

int loops() {
	for (int i = 0; i < 5; i ++)
	{
		std::cout << "Hello world!" << std::endl;
	}

	int j = 0;
	for (;j < 5;)
	{
		std::cout << "This way is correct too" << std::endl;
		if(j == 3) std::cout << "Now j is equal to "<< j << std::endl;
		j++;
	}

	while (j < 10)
	{
		std::cout << "Looping on while loop: " << j << std::endl;
		j++;
	}

	do {
		std::cout << "Despite of j is " << j << ", It's executed (j<10)"<< std::endl;
		j++;
	} while (j < 10);


	std::cin.get();
	return 1;
}