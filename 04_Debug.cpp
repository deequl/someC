#include <iostream>

int main() {
	//BreakPoints	//Use F9
	int v = 5;
	std::cout << v << std::endl;
	//Continue Button/ StepInto/ StepOver/ StepOut Button
	v = 8;  //->F9
	std::cout << v << std::endl;

	//Debug Menu -> Windows -> Memory -> Memory1  (Dynamically, during debug)
	//program fills the memory with CC's before give them the value 
	const char* c = "Hello";

	for (int i = 0; i < 5; i++) { //->F9
		const char letter = c[i];
		std::cout << letter << std::endl;
	}

	std::cin.get();
}