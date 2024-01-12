#include <iostream>

using namespace std;

class Identifier {
//    int i = 0;

public:
    unsigned int id() {
        static int i = 0;

        return i++;
    }
};

class Some {
    int *ptr;
public:
    void init() {
        this->ptr = new int;
    }
    int get_val() {
        return *ptr;
    }
    void set_val(int t) {
        *ptr = t;
    }
};

void copy() {
    Some p1;
    Some p2;
    p1.init(); p2.init();
    p1.set_val(7);
    std::cout << p1.get_val() << " - " << p2.get_val() << std::endl;
    p2 = p1;
    std::cout << p1.get_val() << " - " << p2.get_val() << std::endl;
    p1.set_val(8); // <=== !!!
    std::cout << p1.get_val() << " - " << p2.get_val() << std::endl;
}

int main() {

    copy();
    /*Identifier i1;
    Identifier i2;

    cout << i1.id() << " " << i1.id() << " " << i1.id();
    cout << endl;
    cout << i2.id() << " " << i2.id() << " " << i2.id();
    cout << endl;*/

    return 0;
}


/*Complex operator+(Complex) {
    //...
}

c1.operator+(c2)
c1 + c2*/
