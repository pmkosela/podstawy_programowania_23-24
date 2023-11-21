#include <iostream>
int ARR[5] = {0,1,2,3,4};
void takeArgs(int *x, int *y, int *z){
    *z = *x + *y;
}

void takeArgs2(int &x, int &y, int &z){
    z = x + y;
}
int main()
{

    int x = 7, y = 5, z = 10;

    takeArgs(&x,&y,&z);
    std::cout << z << std::endl;
    takeArgs2(x,y,z);
    std::cout << z;
    int a = 7;
    float b = 1.6;
    char c = 'A';
    char d[5] = {'c', 'd', 'e', 'f', 'g'};
    double e = 2.5;


    std::cout << a << "-" << &a << std::endl;
    std::cout << b << "-" << &b << std::endl;
    //std::cout << c << "-" << &c << std::endl;
    printf("%c-%p \n", c, &c);
    std::cout << d << "-" << &d << std::endl;
    std::cout << e << "-" << &e << std::endl;
    std::cout << ARR[0] << &ARR << std::endl;
    return 0;
}

