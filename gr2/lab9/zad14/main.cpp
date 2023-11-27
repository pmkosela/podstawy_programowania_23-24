/*
Napisz funkcję, która przyjmuje jednobajtową liczbę całkowitą bez znaku v,
liczbę całkowitą b i zmienną logiczną f.
Funkcja powinna pozostawić jedynie wartość 4 najmłodszych bitów liczby v,
a następnie zanegować wartość tych 4-ech bitów, jeżeli f jest równe true,
w przeciwnej sytuacji ten krok powinien być pominięty.
Na koniec funkcja powinna zanegować bit na pozycji b i zwrócić nową wartość.
W przogramie głównym Wyświetli wartość zwróconą przez funkcję z zadanymi argumentami.
*/

#include <iostream>

typedef unsigned char uchar;

using namespace std;

uchar func(uchar v, int b, bool f)
{
    // pozostawić jedynie wartość 4 najmłodszych bitów liczby v

    uchar mask = 0b00001111;

    uchar result = v & mask;

    if (f == true)
    {
        result = result^mask;
    }

    mask = 1 << b;

    result = result^mask;

    return result;
}

int main()
{
    uchar v = 13;
    int b = 6;
    bool f = true;

    cout << (int)func(v, b, f) << endl;

    return 0;
}
