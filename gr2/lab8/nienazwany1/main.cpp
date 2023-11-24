#include <iostream>

using namespace std;

void show_div(int* x, int *y);

int main()
{  
    int arr[9] = {1,3,15,9,4,7,10,5,8};

    int* ptr = &arr[0];
    int* ptr2 = &arr[8];

    show_div(ptr, ptr2);
}

void show_div(int* x, int *y)
{
//    for(int i = *x; i < *y; ++i)
//    {
//        if (*x%3 == 0 && *x%5 == 0)
//        {
//            cout << x << endl;
//            x += 1;
//        }

//    }
    while (x <= y)
    {
        if (*x%3 == 0 && *x%5 == 0)
        {
            cout << *x << endl;
        }
        x += 1;
    }

}
//Napisz funkcję, która przyjmie
//dwa wskaźniki na typ
//całkowitoliczbowy - początek i
//koniec tablicy - i wyświetli
//tylko te liczby z tablicy, które
//dzielą się przez 3 i 5.
