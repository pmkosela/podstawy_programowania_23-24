#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    if (x <= 0) {
        std::cout << "Podana wartosc niewlasciwa" << std::endl;
    }
    int i = 0;
    while (i < x) {
        std::cout << i << " ";
        ++i;
    }

    return 0;
}
