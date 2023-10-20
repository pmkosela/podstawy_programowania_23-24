#include <iostream>

using namespace std;

int main()
{
    /*unsigned n;
    float sum = 0;
    cin >> n;
    for (int i = 0; n > i; ++i)
    {
        int x;
        cin >> x;
        sum += x;
    }
    cout << sum/n << endl;*/

    unsigned n;
    float max = -1;
    cin >> n;
    for (int i = 0; n > i; ++i)
    {
        int x;
        cin >> x;
        if (x > max)
        {
            max = x;
        }
    }
    cout << max << endl;

    return 0;
}

