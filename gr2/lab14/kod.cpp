#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
	std::ifstream file("./kod.cpp");
	//std::ofstream file_writer("./mleko"); <-- nadpisuje plik!
	//std::ofstream file_writer("./mleko", std::ios::app);
	//file_writer << "tesT";
	bool file_open = file.is_open();
	if (!file_open) {
		std::cout << "Nie mamy pliku!\n";
		return 1;
	}
	std::string tmp, source;
	while (!file.eof()) {
		//std::cin >> tmp;
		//file >> tmp;
		std::getline(file, tmp);
		source.append(tmp);
		source.append("\n");
		tmp.clear();
	}
	file.close();
	std::cout << source;

	for (unsigned i = 0; i <= 100; ++i) {
		std::cout << std::setw(3);
		std::cout << std::hex;
		std::cout << i << std::endl;
	}

	for ( iterujemy po tablicy ) {
		file << tablica[i];
	}

	unsigned i = 0;
	while (!std::cin.eof()) {
		std::cin >> tmp;
		++i;
	}
	std::cout << "liczba słów: " << i << std::endl;
	return 0;
}
