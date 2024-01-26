#include <iostream>

class Kot {
	unsigned zeby;

	public:
	/*Kot() {
		this->zeby = 32;
	}*/

	//Kot(unsigned zeby) {
	Kot(unsigned zeby, unsigned i) {
		this->zeby = zeby;
	}

	~Kot() {
		std::cout << "Destruktor\n";
	}

	unsigned getZeby() { return zeby;}
	void setZeby(unsigned z) { zeby = z;}
};

//enum Siersc {Ruda, Czarna, Bura};
enum class Siersc {Ruda, Czarna, Bura};

class Imie {
	public:
	char imie[10];
};

int main() {
	Siersc kolor_siersci = Siersc::Ruda;
	kolor_siersci = Siersc::Czarna;
	/*Kot *sliwka = new Kot;
	delete sliwka;
	Kot zuza;
	Kot onufry(31);
	std::cout << zuza.getZeby() << std::endl;
	std::cout << onufry.getZeby() << std::endl;*/

	Kot arr[3]{{32,2}, {32,2}, {31,3}};

	Imie ala, kot;
	ala.imie[1] = '\0';
	kot.imie[1] = '\0';
	ala.imie[0] = 'A';
	kot.imie[0] = 'K';
	std::cout << ala.imie << " - " << kot.imie;
	std::cout << std::endl;
	ala = kot;
	std::cout << ala.imie << " - " << kot.imie;
	std::cout << std::endl;
	kot.imie[0] = 'L';
	std::cout << ala.imie << " - " << kot.imie;
	std::cout << std::endl;
}
