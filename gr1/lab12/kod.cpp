#include <iostream>

class Kot {
	unsigned zeby;

	public:
	Kot(unsigned argument, unsigned argument2):
		zeby(argument + argument2)
       	{
		std::cout << "konstruktor argumentowy\n";
	}

	/* równoważne!
	 *
	 *Kot(unsigned arugment) {
	 *	this->zeby = argument;
	 *}
	 */

	/*Kot() {
		this->zeby = 32;	
		std::cout << "konstruktor bezargumentowy\n";
	}*/

	~Kot() {
		std::cout << "destruktor\n";
	}

	void setZeby(unsigned z) {
		this->zeby = z;
	}

	unsigned getZeby() {
		return this->zeby;
	}
};

enum KolorOczu {Zielony, Zolty, Niebieski};
enum class Kolor {Czarny, Rudy, Bury};

int main() {
	KolorOczu t = Zielony;
	Kolor u = Kolor::Czarny;

	/*Kot *sliwka = new Kot(40);
	std::cout << sliwka->getZeby() << std::endl;
	delete sliwka;
	Kot hipolit;
	Kot zuza(10);
	std::cout << hipolit.getZeby() << std::endl;
	std::cout << zuza.getZeby() << std::endl;*/
	const unsigned N = 2;
	Kot kotki[N]{{0,1}, {2, 3}};
	for (unsigned i = 0; i < N; ++i) {
		std::cout << kotki[i].getZeby() << std::endl;
	}

	Kot *inne_kotki[N];
	for (unsigned i = 0; i < N; ++i) {
		inne_kotki[i] = new Kot(7, 7);
	}
}
