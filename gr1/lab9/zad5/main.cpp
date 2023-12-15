/*Napisz funkcję, która dostaje jako
 * argumenty dwuwymiarową tablicę tablic
 * o elementach typu int oraz jej wymiary,
 * i zmienia kolejność wierszy w tablicy w
 * taki sposób, że wiersz pierwszy ma się
 * znaleźć na miejscu drugiego, wiersz drugi
 * ma się znaleźć na miejscu trzeciego itd.,
 * natomiast ostatni wiersz ma się znaleźć
 * na miejscu pierwszego
 * (przyjmujemy, że elementy w wierszu są
 * umieszczone w pamięci obok siebie).
 */
#include <iostream>
using namespace std;

void change_rows(int **arr, int rows, int cols){
    int **matrix = new int*[rows];
    for(int i = 1; i < rows + 1; ++i){
        matrix[i % rows] = new int[cols];
        for(int j = 0; j < cols; ++j){
            matrix[i % rows][j] = arr[(i - 1)% rows][j];
        }
    }
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < rows; ++i){
        delete[] matrix[i];
    }
    delete[] matrix;
}


int main()
{
    int rows = 4;
    int cols = 5;
    int **arr = new int*[rows];
    int p = 0;
    for(int i = 0; i < rows; ++i){
        arr[i] = new int[cols];
        for(int j = 0; j < cols; ++j){
            arr[i][j]= p++;
        }
    }
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    change_rows(arr, rows, cols);
}
