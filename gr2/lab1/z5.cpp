#include <iostream>
using namespace std;
int main()
{
	float a, b;
	float c = 0;
	cout << "Input  a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;

	cout << "Sum : " << a + b << endl;
	cout << "Product :" << a * b << endl;
	c = a / b;
	cout << "Quotient :" << c  << endl;
	return 0;
}
