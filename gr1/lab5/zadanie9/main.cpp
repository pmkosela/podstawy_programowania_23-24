#include <iostream>

void argSwap(float & x,  float & y)
{
    float tmp = 0;
    tmp = x;
    x = y;
    y = tmp;
    return;
}

int main()
{
    float a, b;
    std::cin >> a >> b;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = "<< b << std::endl;
    std::cout << "zamieniam" << std::endl;
    argSwap(a,b);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = "<< b << std::endl;
    return 0;
}
