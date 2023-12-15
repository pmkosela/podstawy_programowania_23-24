#include <iostream>

using namespace std;

struct Matrix{
    float arr[3][3];
    int size = 3;
};

void print_mat(Matrix m)
{
    for (int i = 0; i < m.size; ++i)
    {
        for (int j = 0; j < m.size; ++j)
        {
            cout << m.arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void add_mat(Matrix &m, int add)
{
    for (int i = 0; i < m.size; ++i)
    {
        for (int j = 0; j < m.size; ++j)
        {
            m.arr[i][j] += add;
        }

    }

}

bool test_mat(Matrix m, int add)
{
    Matrix n = m;

    add_mat(n, add);

    for (int i = 0; i < m.size; ++i)
    {
        for (int j = 0; j < m.size; ++j)
        {
            if (m.arr[i][j] + add !=
                n.arr[i][j])
            {
                return false;
            }
        }
    }
    return true;


}

int main()
{
    /*Zadanie 9.
   Zdefiniuj strukturę reprezentującą
macierz o rozmiarze 3x3 liczba
zmiennoprzecinkowych. Zdefiniuj
funkcję print_mat() wypisującą na
ekranie elementy tej macierzy.
Zdefiniuj funkcję add_mat() dodawania
liczby do takiej macierzy; funkcja
 ma zwracać nowo obliczoną macierz.
Napisz program testujący.*/
    int add = 2;

    Matrix m;

    for (int i = 0; i < m.size; ++i)
    {
        for (int j = 0; j < m.size; ++j)
        {
            m.arr[i][j] = j;
        }
    }

    print_mat(m);
    add_mat(m, add);
    print_mat(m);

    cout << "bool value =: " << test_mat(m, add);




}
