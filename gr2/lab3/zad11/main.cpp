// Napisz program, który wczyta ze standardowego wejścia dwie liczby naturalne n i m, a następnie wyświetli szachownicę o rozmiarze nxm, w taki sposób, by wystepowały w niej na przemian znaki '#' oraz 'o'.

#include <iostream>

using namespace std;

int main()
{
    unsigned a;
    unsigned b;

    cin >> a >> b;

    bool print_hash = true;
    bool prev_line_start;

    for (int i = 0; i < a; i++) {
        prev_line_start = print_hash;
        for (int j = 0; j < b; j++) {

            cout << ((print_hash)? '#' : 'o');

            print_hash = !print_hash;
        }
//        if (print_hash == prev_line_start) {
//            print_hash = !print_hash;
//        }

        print_hash = (print_hash == prev_line_start)? !print_hash : print_hash;
        cout << '\n';
    }
    return 0;
}
