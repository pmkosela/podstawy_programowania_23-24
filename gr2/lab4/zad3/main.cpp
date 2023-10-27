#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    const int N = 6  ;
    int arr[N];

    for(int i = 0; i < N; ++i){
        arr[i] = rand()%10;
    }

    for(int i = 0; i < N; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < N/2; ++i){
        int tmp = arr[i];
        arr[i] = arr[N-i-1];
        arr[N-i-1] = tmp;
    }

    for(int i = 0; i < N; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
