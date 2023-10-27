#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    const int N = 5;
    int arr[N];

    for(int i=0; i < N; ++i){
        int r = (rand()%10)+1;
        arr[i] = r;
    }
    for(int i=0; i < N; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}
