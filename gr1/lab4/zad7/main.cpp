#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    const int N = 10;

    int array[N];
    bool isMaxIndex[N];
    for(int i = 0; i<N; ++i){
        array[i] = (rand() % 5);
        cout << array[i] << " ";
    }
    int maxIndex = 0;
    for(int i = 1; i<N; ++i){

        if(array[maxIndex]<array[i]){
            maxIndex = i;
        }


    }
    int maxValue = array[maxIndex];
    for(int i = 0; i<N; ++i){
        isMaxIndex[i] = array[i] == maxValue;

    }
    for(int i = 0; i<N; ++i){
        if (isMaxIndex[i]){
            cout << endl << i << endl;
        }
    }
    return 0;
}
