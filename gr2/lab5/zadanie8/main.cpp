#include <iostream>


using namespace std;

bool trianglePossible(float a, float b, float c)
{
    return ((a+b)>c && (a+c)>b && (c+b)>a);
}

int main()
{
    float a, b, c;
    std::cin >> a >> b >> c;
    std::cout << trianglePossible(a, b, c) << std::endl;
    return 0;
}
