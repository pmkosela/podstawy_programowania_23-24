#include <iostream>
using namespace std;

class Identifier{
    //static int a = 0;
public:
    int id();
};

int Identifier::id() {
    static int a = 0;
    return a++;
}

class T {
    int x;

public:
    int getX() const {
        return x;
    }
    void setX(int v) const {
        //x = v;
        std::cout << "setter " << this->x << std::endl;
    }
};

class Complex {
    float im, re;
    Complex &  operator+(Complex & a) {
        //...
    }
};

int main()
{
    Identifier id1;
    Identifier id2;
    std::cout<<id1.id()<<" ";
    std::cout<<id1.id()<<" ";
    std::cout<<id1.id()<<std::endl;
    std::cout<<id2.id()<<" ";
    std::cout<<id2.id()<<" ";
    std::cout<<id2.id()<<std::endl;
    /*T t;
    t.setX(7);
    std::cout << t.getX() << std::endl;*/

    /*cout << t;
    cout.operator<<(t);
    cout.operator<<(int t);
    cout.operator<<(T t) ??*/


    return 0;
}
