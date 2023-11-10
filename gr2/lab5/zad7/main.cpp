//Napisz funkcję, która dostaje jako argument liczbę całkowitą k i zwraca jako wartość największą możliwą liczbę n taką że 2n < k (możliwie najbliższa wartość kolejnej potęgi dwójki)
#include <iostream>

using namespace std;

int max_power(const int k)
{
    int n = 0;
    int p = 1;
    while (p < k)
    {
        p *= 2;
        ++n;
    }

    return n - 1;
}

int main()
{
    int k = 1100;

    cout << max_power(k) << endl;
    return 0;
}
