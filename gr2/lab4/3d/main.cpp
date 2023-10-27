#include <iostream>
#include <cstdlib>

int main() {
    const int N = 3;
    const int M = 3;
    const int O = 3;

    srand(time(NULL));

    int array[N][M][O];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            for (int k = 0; k < O; ++k) {
                array[i][j][k] = rand() % 10;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            for (int k = 0; k < O; ++k) {
                std::cout << array[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
