#include <iostream>

using namespace std;

class Matrix {
    float values[3][3];

public:
    void setValues() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin >> this->values[i][j];
            }
        }
    }

    void setValue(float val, unsigned x, unsigned y) {
        if (x < 3 && y < 3)
            this->values[x][y] = val;
    }

    void print() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << this->values[i][j] << " ";
            }
            cout << endl;
        }
    }

    void multiply(float number);
};

void Matrix::multiply(float number) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            this->values[i][j] *= number;
        }
    }
}

int main() {
    Matrix m;

    m.setValues();

    m.print();
    cout << endl;

    m.multiply(2);
    m.print();

    return 0;
}
