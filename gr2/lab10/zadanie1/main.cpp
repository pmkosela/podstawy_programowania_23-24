#include <iostream>

using namespace std;

/*
 * Zdefiniuj strukturę Rect,
 * reprezentującą prostokąt. Struktura
 * ta ma składać się z dwóch
 * elementów - długości boków a i b.
 * Stwórz funkcję print_rect(..), która
 * wyświetla na ekranie długości boków
 * podanego w parametrze prostokąta.
 * Stwórz funkcję area(...), która
 * zwróci wielkość pola podanego w
 * parametrze prostokąta.
 * W programie stwórz obiekt
 * automatyczny i dynamiczny typu Rect
 * i przetestuj działanie zdefiniowanych
 * funkcji.
 */

struct Rect {
    float b, a;
};

Rect print_rect(Rect p) {
    Rect r = p;
    cout << r.a << ' ' << r.b << endl;
    r.b = 2;
    return r;
}

int main()
{
    Rect r = {.b=1, .a=2};
    //r.a = 1;
    //r.b = 1;
    //Rect *p = new Rect;
    r = print_rect(r);
    cout << r.a << ' ' << r.b << endl;
    //delete p;
    return 0;
}
