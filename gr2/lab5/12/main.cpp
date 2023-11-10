#include <iostream>

using namespace std;

//int fib(int n) {
//    int current = 0;
//    int prev1 = -1;
//    int prev2 = 1;

//    // 0 1 1 2 3 5 8 13
//    for (int i = 0; i <= n; ++i) {
//        current = prev1 + prev2;

//        prev1 = prev2;
//        prev2 = current;
//    }

//    return current;
//}

//int fib_rec(int n) {
//    if (n == 0)
//        return 0;
//    if (n == 1)
//        return 1;
//    return fib_rec(n - 1) + fib_rec(n - 2);
//}

int power2_loop(int n) {
    int product = 1;
    for (int i = 0; i < n; ++i) {
        product *= 2;
    }
    return product;
}

int power2(int n) {
    return (n == 0) ? 1 : 2 * power2(n - 1);
}

int main() {
    const int N = 3;

    cout << power2_loop(N) << endl;;

    return 0;
}
