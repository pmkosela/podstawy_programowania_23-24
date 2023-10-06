#include <iostream>

int main() {
	int hour, minute;
	int time_minutes = 0;

	std::cout << "Enter first hour and minutes (HH:mm): ";
	scanf("%d:%d", &hour, &minute);

	time_minutes += hour * 60 + minute;

	std::cout << "Enter second hour and minute (HH:mm): ";
	scanf("%d:%d", &hour, &minute);

	time_minutes -= hour * 60 + minute;

	std::cout << "Minute difference is: "
	       	  << time_minutes << std::endl;
	
	return 0;
}
