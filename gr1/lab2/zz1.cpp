#include <iostream>

using namespace std;

int main(){

	double a;
	const double b = 7;

	cout << "Podaj wartosc a:";
	cin >> a;
	cout << "Podaj wartosc b:";
	//cin >> b;
	
	cout << "Wartosc a: " << a << endl;
	cout << "Wartosc b: " << b << endl;

	double c = a;
	a = b;
	//b = c;
	
	cout << "Wartosc zamienionego a: " << a << endl;
	cout << "Wartosc zamienionego b: " << b;

return 0;
}
