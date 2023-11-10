#include <iostream>
using namespace std;

void absArr(int arr[], const int A){
    for(int i=0; i<A; ++i){
        if(arr[i]<0)
            arr[i] = -arr[i];
    }

}

int main()
{
    const int N = 5;
    int arr[N];
    for(int i=0; i<N; ++i)
        cin >> arr[i];
    absArr(arr, N);
    for(int i=0; i<N; ++i)
        cout << arr[i];
    return 0;
}
