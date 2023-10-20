#include <iostream>
#include <math.h>

using namespace std;

int main()
{
//    unsigned int x;
//    cin >> x;

//    int i = 0;
//    while (i < x) {
//        cout << i << endl;
//        ++i;
//    }




//    int x;
//    cin >> x;

//    if (x > 0)
//    {
//        for (int i = 0; i <= x; ++i)
//        {
//            printf("%i\n", i);
//        }
//    }
//    else
//    {
//        for (int i = 0; x <= i; ++x)
//        {
//            printf("%i\n", x);
//        }
//    }

    int x;
    cin >> x;

    int d = (x > 0)? 1: -1;

    int i = 0;
    while (i*i <= x*x)
    {
        int z = (x > 0)? i: x-i;
        printf("%i\n", z);
        i += d;
    }

    return 0;
}
