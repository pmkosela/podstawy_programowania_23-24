// Napisz program sprawdzający, czy liczba wczytana od użytkownika jest potęgą dwójki. Program powinien wyświetlić 1, jeśli liczba jest potęgą dwójki lub 0 w przeciwnym wypadku.

#include <iostream>

using namespace std;

bool is_pow_2(unsigned int n)
{
//    unsigned int mask = 1;

//    while (mask <= n)
//    {
//        if (n & mask)
//        {
//            if (n == mask)
//            {
//                return true;
//            }
//        }

//        mask = mask << 1;
//    }

return !(n & (n-1));
}

int main()
{
    unsigned int number;

    cin >> number;

    cout << is_pow_2(number) << endl;

    return 0;
}
