/*Napisz program, który wczyta od użytkownika dwie liczby zmiennoprzecinkowe x i y, a następnie nieujemną liczbę całkowitą z. Program, w zależności od wartości podanej liczby z, powinien wyświetlić wynik odpowiedniego działa:
z=0 -> sumę x i y,
z=1 -> różnicę x i y,
z=2 -> iloczyn x i y,
z=3 -> iloraz x i y.
 */
#include <iostream>

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y){
    return x * y;
}

float divide(float x, float y){
    return x / y;
}

int main()
{
    float x, y;
    unsigned z;
    std::cin >> x >> y >> z;
    /*switch (z) {
    case 1:
        std::cout << x + y << std::endl;

        // I tak dalej...
    }*/

    float (*ptr[])(float, float) = {add, subtract,
                                    multiply, divide};
    std::cout << ptr[z](x, y) << std::endl;

    return 0;
}
