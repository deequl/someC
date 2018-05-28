#include <iostream>

int controlFlow() {
	for (int i = 0; i < 10; i++) 
	{
		std::cout << "Hello World!" << std::endl;
		if (i > 1) continue;
		std::cout << "Iteration: " << i << std::endl;
		if (i == 8) {
			std::cout << "Break: loop is over" << std::endl;
			break;
		}
		if (i==7) return 1;
	}

	return 1;
}