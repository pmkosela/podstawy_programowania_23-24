#include <iostream>

using namespace std;

int main()
{
    float number = 1, sum = 0;
    const float ep = 0.001;
    while (number > ep){
        std::cin >> number;
        sum += number;
    }
    std::cout << sum << "\n";

/*
    for (int i = 0; i < 8; i++){
        number /= 2;
    }
    float k = 1/256;
    std::cout << number << " " << k << " " << (number==k);
*/
    return 0;
}
