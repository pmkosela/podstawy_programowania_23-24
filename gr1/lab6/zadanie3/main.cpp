#include <iostream>
bool bitVal(int x,int n) {
    int mask = (1 << n);
    return x & mask;
}
int main()
{
    int n = 1;
    int x1 = 3;
    int x2 = 2;
    int x3 = 1;
    std::cout << x1 << " " << bitVal(x1,n) << std::endl;
    std::cout << x2 << " " <<bitVal(x2,n) << std::endl;
    std::cout << x3 << " " << bitVal(x3,n) << std::endl;
    return 0;
}
