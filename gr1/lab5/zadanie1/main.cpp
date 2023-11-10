#include <iostream>

using namespace std;

int sum(int a,int b)
{
    cout << "To jest suma !" << endl;
    return a+b;
}

int main()
{
    cout << "To jest main" << endl;
    cout << sum(1,2) << endl;
    cout << "To jest znowu main!" << endl;
    return 0;
}
