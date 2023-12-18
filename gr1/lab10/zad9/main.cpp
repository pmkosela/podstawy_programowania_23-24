/*Zdefiniuj strukturę reprezentującą macierz o
 * rozmiarze 3x3 liczba zmiennoprzecinkowych.
 * Zdefiniuj funkcję print_mat() wypisującą na
 *  ekranie elementy tej macierzy.
Zdefiniuj funkcję add_mat() dodawania liczby
do takiej macierzy; funkcja ma zwracać nowo
obliczoną macierz.
Napisz program testujący.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
const int N = 3;
using namespace std;

struct Matrix{

    float element[N][N];
};

void print_mat(Matrix matrix){
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j)
            cout << matrix.element[i][j] << " ";
        cout << endl;
    }
}
void fill(Matrix & matrix){
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            matrix.element[i][j] = rand()%10;
        }
    }
}
Matrix add_mat(Matrix matrix, float a){
    Matrix out;
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j)
            out.element[i][j] = matrix.element[i][j] + a;
    }
    return out;
}
int main()
{
    srand(time(0));
    Matrix matrix;
    fill(matrix);
    Matrix matrix2 = add_mat(matrix, 7);
    print_mat(matrix);
    print_mat(matrix2);
    return 0;
}
