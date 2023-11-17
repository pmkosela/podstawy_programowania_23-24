#include <iostream>

using namespace std;
bool bitReturn(unsigned int x, unsigned int n){
   unsigned int mask = 1;
    return x & (mask << n);

}

unsigned int setBit(unsigned int x, int n) {
    unsigned int mask = 1;
    return x | (mask << n);
}

unsigned int unsetBit(unsigned int x, int n) {
    unsigned int mask = 1;
    return x & ~(mask << n);
}

unsigned int toggleBit(unsigned int x, int n) {
    unsigned int mask = 1;
    return x ^ (mask << n);
}

int main()
{
   unsigned int x = 10; // 1010

   cout << setBit(x, 0) << endl;
   cout << unsetBit(x, 1) << endl;
   cout << toggleBit(x, 3) << endl;

   return 0;
}
