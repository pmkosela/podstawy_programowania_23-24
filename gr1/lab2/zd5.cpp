#include <iostream>

int main()
{

	double start1, start2, end1, end2;

	std::cout << "Start of the first interval: ";
	std::cin >> start1;
	std::cout << "End of the first interval: ";
	std::cin >> end1;

	std::cout << "Start of the second interval: ";
	std::cin >> start2;
	std::cout << "End of the second interval: ";
	std::cin >> end2;


	if (start1 > start2) {
		double tmp = start1;
		start1 = start2;
		start2 = tmp;
		tmp = end1;
		end1 = end2;
		end2 = tmp;
	}

	if (end1 > start2) {
		std::cout << "Intersection\n";
		double end;
	/*	if (end1 > end2) 
			end = end2;
		else
			end = end1;	*/
		end = (end1 > end2) ? end2:end1;
		std::cout << start2 << " , " << end << std::endl;
	} else {
		std::cout << "No Intersection\n";	
	}

	return 0;

}
