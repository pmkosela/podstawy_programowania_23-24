#include <iostream>



/*
Napisz funkcję, która jako argumenty
przyjmie cztery wskaźniki - początki i
końce dwóch tablic całkowitoliczbowych -
i skopiuje zawartość jednej tablicy do
drugiej. Załóż, że pierwsza nie jest
dłuższa od drugiej. */

void copy_array(int* startArrayX, int* endArrayX,
                int* startArrayY, int* endArrayY)
{

    while(startArrayX<=endArrayX){
        *startArrayY = *startArrayX;
        ++startArrayX;
        ++startArrayY;
    }

}


int main()
{
    int arr1[] = {1, 3, 2};
    int arr2[] = {5, 6, 7, 8, 9};

    copy_array(arr1, &arr1[2], arr2, &arr2[4]);

    for(int i=0; i<5; ++i){
        std::cout << arr2[i] << " ";
    }
    return 0;
}
