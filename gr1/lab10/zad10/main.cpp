/*Zdefiniuj strukturę vec2d, składającą się
 * z dwóch pół x i y typu zmiennoprzecinkowego,
 *  która będzie reprezentowała wektor dwuwymiarowy.
 *   Utwórz tablicę automatyczną obiektów tego typu.
 *    Z pomocą funkcji z biblioteki <algorithm>:
- wypełnij tę tablicę wektorami, których poszczególne
 współrzędne spełniają zależność: x jest liczbą pseudolosową z zakresu domkniętego <-1, 1> a y jest liczbą przeciwną do x;
- wypisz na ekranie wszystkie elementy tej tablicy;
- posortuj wszystkie wektory w tablicy malejąco względem
współrzędnej y;
- znajdź wektor o najmniejszej współrzędnej x.*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>

const int N = 10;
using namespace std;
struct Vec2d{
    float x;
    float y;
};
Vec2d randomVec2d(){
    Vec2d vec={rand(), rand()};
    return vec;
}
float length(Vec2d vec){
    float x = vec.x;
    float y = vec.y;
    return sqrt(x*x + y*y);
}
void normalize(Vec2d & slonik){
    float len = length(slonik);
    slonik.x /= len;
    slonik.y /= len;
}
char* to_string(Vec2d vec2d){
    char* string = new char[30];
    sprintf(string, "(%f, %f)", vec2d.x, vec2d.y);
    return string;
}
bool compare_y(Vec2d a, Vec2d b){
    return (a.y<b.y);
}
Vec2d minimal_x(Vec2d *begin, Vec2d *end) {
                //bool (*f)(Vec2d, Vec2d)){
    Vec2d min = *begin;
    for (Vec2d *i = begin; i < end; ++i) {
        if(min.x > i->x){
            min=*i;
        }
    }
    return min;
}
int main()
{
    srand(time(NULL));
    Vec2d array[N];
    for(int i = 0; i < N; ++i){
        Vec2d kot = randomVec2d();
        normalize(kot);
        array[i] = kot;
    }
    std::sort(array, array+N, compare_y);
    //std::cout<<"Minimalny x: "<<minimal_x(array, array+N)<<"\n";
    std::cout<<"Minimalny x: "<<to_string(minimal_x(array, array+N))<<"\n";
    for(int i = 0; i < N; ++i)
        std::cout << to_string(array[i]) << std::endl;

    return 0;
}
