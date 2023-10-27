#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    const int N = 30zz;
    srand(time(NULL));
    int array[N];
    for(int i = 0; i<N; ++i){
        array[i] = (rand() % 12) + 6;
        cout << array[i] << endl;

    }

    return 0;
}
