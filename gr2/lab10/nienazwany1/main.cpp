#include <iostream>
#include <algorithm>

using namespace std;

struct T {
    int x;
};

bool compare(const T &a, const T &b) {
    int x = a.x;
    int y = b.x;
    if (x < y) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    const unsigned len = 5;
    T array[] = {{2}, {3}, {1}, {4}, {5}};
    std::sort(array, array + len, compare);
    return 0;
}
