#include <iostream>
#include <cmath>
using namespace std;

/*

Dla klasy z poprzedniego zadania,
w programie głównym utwórz:
(1) obiekt automatyczny tej klasy,
(2) obiekt dynamiczny, wskazywany wskaźnikiem,
(3) tablicę automatyczną obiektów automatycznych,
(4) tablicę automatyczną wskaźników na obiekty,
zainicjuj te wskaźniki w dowolny sposób,
(5) dynamiczną tablicę obiektów automatycznych,
(6) dynamiczną tablicę wskaźników, zainicjuj te wskaźniki.
Na końcu programu zwolnij pamięć dla wszystkich obiektów
tworzonych dynamicznie. W każdym przypadku skorzystaj z publicznych
metod tej klasy.


*/

class Point{
    float x;
    float y;
public:
    void read_point(){

        cin>>this->x>>this->y;
    }
    float distance(Point &l){
        float result;
        result = sqrt(((this->x - l.x)*(this->x - l.x)) + ((this->y - l.y)*(this->y - l.y)));
        return result;
    }
    float get_x(){
        return x;
    }
    float get_y(){
        return y;
    }
    void set_x(float x){
        this ->x = x;
    }
    void set_y(float y){
        this ->y = y;
    }
};

void func()
{
    // obiekt automatyczny tej klasy

    Point k;

    // obiekt dynamiczny, wskazywany wskaźnikiem

    Point *j = new Point;

    delete j;

    // tablicę automatyczną obiektów automatycznych

    Point arr1[5];

    // tablicę automatyczną wskaźników na obiekty, zainicjuj te wskaźniki w dowolny sposób,

    Point *arr2[5];

    for (int i = 0; i < 5; ++i)
    {
        arr2[i] = new Point;
    }

    for (int i = 0; i < 5; ++i)
    {
        delete arr2[i];
    }

    // dynamiczną tablicę obiektów automatycznych,

    Point *arr3 = new Point[5];

    delete[] arr3;

    // dynamiczną tablicę wskaźników, zainicjuj te wskaźniki.

    Point **arr4 = new Point*[5];

    for (int i = 0; i < 5; ++i)
    {
        arr4[i] = new Point;
    }

    for (int i = 0; i < 5; ++i)
    {
        delete arr4[i];
    }

    delete[] arr4;
}


int main(){
    Point p1;
    Point p2;

    p1.read_point();
    p2.read_point();
    cout<<p1.distance(p2);
    return 0;
}
