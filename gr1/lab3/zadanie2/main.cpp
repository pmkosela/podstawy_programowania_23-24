#include <iostream>

int main()
{
    int x, k = 0, i = 0;
    std::cin >> x;

    if(x>0)
        k = 1;
    else
        k = -1;

    while(i*i<=x*x){
        int z = (x<0)?x-i:i;
        std::cout << z << " ";
        i+=k;
    }



    return 0;
}
