#include <iostream>

using namespace std;

int *resize(int *arr, unsigned size, unsigned newSize) {
    int *new_arr = new int[newSize];
    //int *new_arr = (int *)malloc(sizeof(int) * newSize);
    unsigned i = 0;
    while (i < size && i < newSize) {
        new_arr[i] = arr[i];
        ++i;
    }
    delete[] arr;
    return new_arr;
}

int main()
{
    int *arr = new int[6];
    for (unsigned i = 0; i < 6; ++i)
        arr[i] = i;
    for (unsigned i = 0; i < 6; ++i)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;

    arr = resize(arr, 6, 10);

    for (unsigned i = 0; i < 10; ++i)
        std::cout << arr[i] << ' ';
    return 0;
}
