#include <iostream>

using namespace std;
void funBit(unsigned int word, unsigned char* b0, unsigned char* b1,
            unsigned char* b2, unsigned char* b3){
    unsigned int* ptr = &word;
    unsigned char* ptr2 = (unsigned char*)ptr;
    *b0 = *ptr2;
    *b1 = *(ptr2 + 1);
    *b2 = *(ptr2 + 2);
    *b3 = *(ptr2 + 3);
    printf("%p--%p", ptr2, ptr2+1);

}
int main()
{
    unsigned int word = 5;
    unsigned char b0 = 3;
    unsigned char b1 = 7;
    unsigned char b2 = 9;
    unsigned char b3 = 15;
    funBit(word, &b0, &b1, &b2, &b3);
    cout << (int)b0 << " " << (int)b1 << " " << (int)b2 << " " << (int)b3;
    return 0;
}
