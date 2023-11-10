#include <iostream>

void absArr(int arr[], const int N)
{
    for(int i=0; i<N; ++i){
        if(arr[i]<0){
            arr[i] = arr[i]*(-1);
        }
    }
}

int main()
{
    const int  N = 5;
    int array[N];
    for(int i=0; i<N; ++i){
        std::cin >> array[i];
    }
    absArr(array, N);
    int i=0;
    while(i<N){
        std::cout << array[i] << " ";
        ++i;
    }
    return 0;
}
