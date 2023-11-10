#include <iostream>

void function(float a, int & outFloor, float & outFraction)
{
    outFloor = (int)a;
    outFraction = a - outFloor;

}

int main()
{
    float a, czescUlamkowa;
    int podloga;
    std::cin >> a;
    function(a, podloga, czescUlamkowa);
    std::cout << podloga << " " << czescUlamkowa;
    return 0;
}
