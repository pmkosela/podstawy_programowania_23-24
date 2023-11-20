#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    float b = 0.5;
    char c = ' ';
    int d[11];
    double e = 0.5;

    cout << sizeof(a) << "--" << &a << endl;
    printf("%d--%p\n", sizeof(b), &b);
//    cout << sizeof(c) << "--" << (char *)&c << endl;
    printf("%d--%p\n", sizeof(c), &c);
//    cout << sizeof(d) / sizeof(int) << "--" << &d << endl;
    cout << sizeof(d) << "--" << &d << endl;
    cout << sizeof(e) << "--" << &e << endl;
    return 0;
}
