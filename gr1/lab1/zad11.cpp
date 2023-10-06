#include <iostream>

int main() {
	int h1;
	int m1;
	scanf ("%d:%d", &h1, &m1);
	int all_minutes_1 = m1 + (h1 * 60);
	scanf ("%d:%d", &h1, &m1);

	/*int all_minutes_2 = m1 + (h1 * 60);*/
	//difference = all_minutes_1 - all_minutes_2;
	//difference = difference - all_minutes_2;
	all_minutes_1 -= m1 + (h1 *60);
	std::cout << "difference:" << all_minutes_1 << 
		std::endl;
	return 0;
}

