#include<iostream>

int main()
{
	char a;
	int b;
	float c;
	double d;
	long int e;
	short int f;
	long double g;
	bool i;
	unsigned int j;
	unsigned char k;

	
	std::cout <<"char: "<< sizeof(a)<<std::endl;
	std::cout <<"	int: "<<  sizeof(b)<<std::endl;
	std::cout <<"	float: "<<  sizeof(c)<<std::endl;
	std::cout <<"	double: "<<  sizeof(d)<<std::endl;
	std::cout <<"	long int: "<<  sizeof(e)<<std::endl;
	std::cout <<"	short int: "<<  sizeof(f)<<std::endl;
	std::cout <<"	long double: "<<  sizeof(g)<<std::endl;
	std::cout <<"	bool: "<<  sizeof(i)<<std::endl;
	std::cout <<"	unsigned int: "<<  sizeof(j)<<std::endl;
	std::cout <<"	unsigned char: "<<  sizeof(k)<<std::endl;
}
