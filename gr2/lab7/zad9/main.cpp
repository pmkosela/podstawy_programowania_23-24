#include <iostream>

using namespace std;

void array_print(int *start, int *end)
{
    cout << sizeof(start) << ' ';
    while (start <= end)
    {
        cout << *start << endl;
        ++start;
    }
}


int main()
{
    const int ARR_LENGTH = 5;
    int arr[ARR_LENGTH] = {1, 2, 3, 4, 5};

    cout << sizeof(arr) << ' ';

    array_print(arr, arr + 4);


    return 0;
}
