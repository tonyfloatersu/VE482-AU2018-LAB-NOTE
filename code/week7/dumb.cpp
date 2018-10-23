#include <iostream>

int main() {
	std::cout << "Hello, your name? " << std::endl;
	std::string temp; std::cin >> temp;
	std::cout << "Hello! " + temp << std::endl;
	return 0;
}
