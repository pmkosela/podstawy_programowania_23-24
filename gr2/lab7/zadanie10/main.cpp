#include <iostream>
#include <math.h>

using namespace std;

bool isPrimeNumber(unsigned int x)
{
    //for (unsigned i = 2; i < x; ++i) {
    for (unsigned i = 2; i < sqrt(x); ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    unsigned int x;
    unsigned int y;
    cin>>x;
    cin>>y;
    if(x>y){
        unsigned int temp = x;
        x=y;
        y=temp;
    }
    for(unsigned int i = x; i < y; ++i){
        if (isPrimeNumber(i))
            cout << i << " ";
    }

    return 0;
}
