/*Zdefiniuj strukturę Rect, reprezentującą prostokąt.
 *  Struktura ta ma składać się z dwóch elementów -
 *   długości boków a i b.
Stwórz funkcję print_rect(..), która wyświetla na
ekranie długości boków podanego w parametrze prostokąta.
Stwórz funkcję area(...), która zwróci wielkość pola
 podanego w parametrze prostokąta.
W programie stwórz obiekt automatyczny i dynamiczny
typu Rect i przetestuj działanie zdefiniowanych funkcji.*/
#include <iostream>

using namespace std;

struct Rect {
    float a;
    float b;
};
void print_rect(Rect prostokat){
    cout << prostokat.a << " ";
    cout << prostokat.b << endl;;
}
float area(Rect prostokat){
    return prostokat.a * prostokat.b;
}


void shrink(Rect & prostokat) {
    prostokat.a /= 2;
    prostokat.b /= 2;
}

int main()
{

    float x = 7;
    float y = 5;
    Rect prostokat = {.a = 7, .b = 5};
    Rect *prostokat1 = new Rect;
    (*prostokat1).a = 8;
    prostokat1->b = 12.5;

    x = 0;
    y = 0;
    shrink(prostokat);
    cout << "długość: " << prostokat.a << endl;
    cout << "szerokość: " << prostokat.b << endl;
            print_rect(*prostokat1);
    cout << area(*prostokat1) << endl;

        delete prostokat1;
    return 0;
}
