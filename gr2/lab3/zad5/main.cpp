#include <iostream>

using std::cout, std::cin, std::endl;

const double EPS = 0.0001;

int main() {
    float sum = 0;

    float x;
    do {
        cin >> x;
        sum += x;
    } while(x < EPS);

    cout << sum << endl;

//    int k = 0;

//    while (k > 0)
//        cout << "k > 0" << endl;

//    do {
//        cout << "[do while] k > 0" << endl;
//    } while (k > 0);

//    const int c = 4;

//    float n = 1;
//    for (int i = 0; i < c; ++i) {
//        n *= 1/2;
//    }

//    float n2 = 1.0 / 256;

//    cout << n << " | " << n2 << endl;
//    cout << "n == n2: " << (n == n2) << endl;

    return 0;
}
