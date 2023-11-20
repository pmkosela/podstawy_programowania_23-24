#include <iostream>

using namespace std;

void sumNumbers(int* a, int* b, int* c) {
    *c = *a + *b;
}

void sumNumbersReferences(int & a, int & b, int & c) {
    c = a + b;
}

void swapVariables(int & a, int * b) {
    int temp = a;
    a = *b;
    *b = temp;
}

int main() {
    int a = 3, b = 5;
    int c;

//    sumNumbers(&a, &b, &c);
    sumNumbersReferences(a, b, c);

    cout << c << endl;

    return 0;
}
