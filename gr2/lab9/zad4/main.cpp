/*Napisz funkcję rekurencyjną, która zamienia liczbę binarną,
 *  reprezentowaną za pomocą napisu,
 *  na liczbę całkowitą. Zademonstruj jej użycie.
PRZYKŁAD:
IN: "10010011"
OUT: 147*/

#include <iostream>
#include <math.h>

using namespace std;

int binToDec(char* string, int length) {
    int value = 0;
    if(string[0] == '1') {
        value += pow(2, length-1);
    }
    if(length > 0){
        value += binToDec(string+1, length-1);
    }
    return value;
}

int main()
{
    cout << binToDec("10010011", 8) << endl;
    return 0;
}
