#include <iostream>

using namespace std;

int f(int i,int j){
    cout << "jestem  w funkcji f" << endl;
    int a;
    a = i + j;
    return a;
}

int main()
{
    cout << "jestem  w funkcji main" << endl;
    int a = 1, b = 2;
    cout << f(a,b) << endl;
    cout << "jestem  w funkcji main" << endl;

    return 0;
}
