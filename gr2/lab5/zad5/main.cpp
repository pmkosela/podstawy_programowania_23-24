//Napisz funkcję, która przyjmie w argumencie liczbę zmiennoprzecinkową i "zwróci" jej wartość całkowitą i ułamkową. Jak może wyglądać sygnatura takiej funkcji, które ma "zwrócić" dwie wartości?
#include <iostream>

using namespace std;

void func(float a, int & floor, float & fraction)
//void func(float a, int floor, float fraction)
{
    floor = int(a);
    fraction = a - int(a);
}

int main()
{
    float a = 1.25;
    int m = 1;
    float n = 1;
    func(a, m, n);
    cout << m << " " << n << endl;
    return 0;
}
