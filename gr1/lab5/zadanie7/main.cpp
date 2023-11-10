#include <iostream>

int pow_two(unsigned int a)
{
    int value = 1;
    for(int i = 0;i < a;++i)
    {
        value *= 2;
    }
    return value;
}

int power(int k)
{
    int current = 1;
    int n = 0;
    while(k > current)
    {
        current *= 2;
        ++n;
    }
    return n - 1;
}

int main()
{
    int input;
    std::cin >> input;
    std::cout << power(input);
    return 0;
}
