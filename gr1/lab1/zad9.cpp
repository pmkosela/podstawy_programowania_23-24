#include <iostream>

int main() {
	//n, a1, sn
	double n, a1, sn;
	std::cout << "input n \n";
	std::cin >> n;
	std::cout << "input a1 \n";
	std::cin >> a1;
	std::cout << "input sn \n";
	std::cin >> sn;
	double an = ((2 * sn) / n) - a1;
	std::cout << an << std::endl; 

	return 0;
}
