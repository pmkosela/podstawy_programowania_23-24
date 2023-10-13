#include <iostream>

using namespace std;

int main() { 

	unsigned char a;
	unsigned char a_overflow;
	cout << "Please enter value of a:" << endl;
	scanf("%hhd",&a);
	a_overflow = a + 200;
	cout << "Computed value of a plus 200 is " << (int) a_overflow << endl;
	cout << "Why? Because the upper limit of the representation of ";
	cout << "this type has been breached.";

return 0;

}
