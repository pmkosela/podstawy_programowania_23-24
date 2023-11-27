/*
Napisz funkcję, która w argumencie przyjmuje napis (c-string)
a następnie sprawdza, czy dany napis złożony jest z samych cyfr.
W przypadku, gdy napis składa się z samych cyfr, funkcja powinna
zwrócić liczbę całkowitą, którą reprezentuje napis lub wartość -1
w przeciwnym wypadku. W funkcji głównej wczytaj od użytkownika napis
i wyświetl wynik działania funkcji.
PRZYKŁADY:
IN: "123ak"
OUT: -1
IN: "1001"
OUT: 1001
*/
#include <iostream>

using namespace std;

int strToInt(char* string) {
    int i = 0;
    int power = 1;
    int output = 0;
    while(string[i] != '\0'){
        power*=10;
        if(!(string[i] >= '0' && string[i] <= '9')){
            return -1;
        }
        ++i;
    }
    power/=10;
    i = 0;
    while(string[i] != '\0'){
        output += (string[i]-'0')*power;
        power/=10;
        ++i;
    }
    return output;
}

int main()
{
    cout << strToInt("123ak") << endl << strToInt("270");
    return 0;
}
