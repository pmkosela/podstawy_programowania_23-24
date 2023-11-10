#include <iostream>

int power2(unsigned n)
{
    /*if(n==0)
    {
        return 1;
    }
    else
    {
        return power2(n-1) * 2;
    }
    */
    return n == 0 ? 1 : power2(n-1) * 2;
}

int main()
{
    int k;
    std::cin >> k;
    std::cout << power2(k) << std::endl;
    return 0;
}
