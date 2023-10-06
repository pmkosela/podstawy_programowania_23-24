#include <iostream>
#include <cmath>

int main() {

	float a, b;

	std::cout << "Wpisz pierwsza liczbe:" << 
		std::endl;
	std::cin >> a;
	std::cout << "Wpisz druga liczbe:" <<
		std::endl;
	std::cin >> b;

	int suma = a + b;
	int iloczyn = a * b;
	float iloraz = a / b; 
	
	std::cout << "Suma:" << suma << std::endl;
	std::cout << "Iloczyn:" << iloczyn <<
		 std::endl;
	std::cout << "Iloraz;" << iloraz << 
		 std::endl;

}
