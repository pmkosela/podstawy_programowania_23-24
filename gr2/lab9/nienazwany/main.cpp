#include <iostream>

using namespace std;

bool fun(int** arr, int n, int m) {
    for (int i = 0; i < n; ++i) {
        if (arr[i][0] || arr[i][m-1])
            return false;
    }

    for (int i = 0; i < m; ++i) {
        if (arr[0][i] || arr[n-1][i])
            return false;
    }

    return true;
}

int main() {
    int n = 3, m = 3;

    int** arr = new int*[n];
    for (int i = 0; i < m; ++i)
        arr[i] = new int[m];

    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            arr[i][j] = 0;

    cout << fun(arr, n, m) << endl;

    for (int i = 0; i < m; ++i)
        delete[] arr[i];
    delete[] arr;
}
