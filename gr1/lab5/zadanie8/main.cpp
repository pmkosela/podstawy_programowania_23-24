#include <iostream>

bool possibleTriangle(float a, float b, float c = 10)
{
    return a+b>c && a+c>b && b+c>a;
}

int main()
{
    float k, l, m;
    bool x;
    std::cin >> k >> l >> m;
    //x = possibleTriangle(k, l, m);
    x = possibleTriangle(k, l);
    std::cout << x << std::endl;
    return 0;
}
