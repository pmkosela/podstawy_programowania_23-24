#include <iostream>

int main()
{
	float x0;
	float x1;
	float y0;
	float y1;

	std::cin >>x0 >>x1 >>y0 >>y1;

	if (!(x0 < y0)) {
		float temp = x0;
		x0 = y0;
		y0 = temp;
		temp = y1;
		y1 = x1;
		x1 = temp;
	}

	if (y0 < x1){
		float s;
	/*	if (x1 < y1)
			s=x1;
		else
			s=y1;*/
		s = x1<y1 ? x1 : y1;
		std::cout <<y0 <<"," <<s <<std::endl;
		std::cout <<"Intersection";
	} else {
		std::cout <<"No intersection";
	}
	return 0;
}
