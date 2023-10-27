#include <iostream>

using namespace std;

int main()
{
    const int LENGTH = 3;
    int array[LENGTH];

    for (int i = 0; i < LENGTH; ++i)
        cin >> array[i];
    for (int i = 0; i < LENGTH; ++i)
        cout << array[i] << " ";
    cout << endl;
    return 0;
}
