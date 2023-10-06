#include <iostream>

int main() {
	std::cout << "napis";
	
	std::cout << " napis" << std::endl;
	std::cout << " napis\n";
	printf(" napis\n");// << std::endl;
	std::cout << "normalnie sie wykonuje\n";
	/* to jest komentarz*/
	/* to jest dłuższy komentarz wieloliniowy
	 mleko mkleko lorem ipsum */

	//int liczba_malp = -12.5; <-- całkowita, znak
	unsigned int liczba_malp = 12.5;
	//^^^^^^^^^^ całkowita bez znaku
	/*float liczba_malp = 12.5;
	double liczba_malp = 12.5;*/

	std::cin >> liczba_malp;

	std::cout << liczba_malp;
	std::cout << " małp" << std::endl;
	printf("%d malp %f", liczba_malp, 0.1);
	
	

	return 0;
}
