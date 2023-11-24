// Napisz program, który wczyta od użytkownika liczbę całkowitą n, a następnie dynamicznie zaalokuje pamięć dla n elementowej tablicy liczb całkowitych. Program powinien wypełnić tablicę dowolnymi wartościami, a następnie wyświetlić wszystkie elementy tej tablicy. Na końcu programu zwolnij zaalokowaną pamięć.

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int* create_arr(int n)
{
    int* arr;
    arr = new int[n];
    return arr;
}

void fill_arr(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        arr[i] = rand() % 100;
    }
}

void print_arr(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    srand(time(NULL));

    int n;
    cin >> n;

    int* arr = create_arr(n);
    fill_arr(arr, n);
    print_arr(arr, n);

    delete[] arr;
    return 0;
}
