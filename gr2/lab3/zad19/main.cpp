// Napisz program, który pobierze od użytkownika 6 liczb zmiennoprzecinkowych
// będących współrzędnymi (x, y) trzech punktów na płaszczyźnie.
// Jeżeli leżą one na jednej prostej, program powinien wyświetlić
// współczynniki a, b równania tej prostej w postaci y = ax+b.
// W przeciwnym razie program powinien wyświetlić komunikat „niewspolliniowe”.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    float a = (y1 - y2) / (x1 - x2);
    float b = y1 - a * x1;

    if (abs((a * x3 + b) - y3) < 0.0001) {
        printf("y = %fx+%f\n", &a, &b);
    } else {
        cout << "niewspółliniowe" << endl;
    }

    return 0;
}
