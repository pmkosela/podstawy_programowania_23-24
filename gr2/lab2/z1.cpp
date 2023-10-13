#include <iostream>

int main()
{
	double a;
	const double b = 7;

	//std::cin >>a >>b;
	printf("a = %f\n",a);
	printf("b = %f\n",b);

	double temp = a;
	a = b;

	//b = temp;
	std::cout <<"a = " <<a<<std::endl;
	std::cout <<"b = " <<b<<std::endl;

	return 0;
}
