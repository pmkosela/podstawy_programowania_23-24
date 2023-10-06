#include <iostream>

int main() {
	int a, b, c;
	std::cout << "Enter a, b, c: ";
	std::cin >> a >> b >> c;

	float avg  = (a+b+c)/3;
	std::cout << "Average: " << avg << std::endl;
}
