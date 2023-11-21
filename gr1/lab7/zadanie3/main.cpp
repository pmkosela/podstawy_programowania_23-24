#include <iostream>

void write_value(int word, char *a, char *b, char *c, char *d){

    void *ptr;
    ptr = (char*)&word;

    *a = *(char *)ptr;
    ptr++;

    /**b = char *ptr;
    ptr += 1;

    *c = char *ptr;
    ptr += 1;

    *d = char *ptr;
    ptr += 1;*/
}

void show_array(int *a,int *b)
{
    while(a <= b)
    {
        std::cout << *a;
        a++;
    }
}

int main()
{
    int word = 60000000000000;
    char a, b, c, d;

    //write_value(word, &a, &b, &c, &d);

    //std::cout<<a<<b<<c<<d;

    int array[] = {1,5,3,2,2};
    show_array(array,&array[4]);
    return 0;

}

/*Zadanie 6.
Napisz funkcję, która przyjmuje w argumentach liczbę 4-bajtową całkowitą
nieujemną word oraz cztery wskaźniki na 1-bajtowe liczby całkowitą nieujemne
b0,b1,b2,b3. Funkcja ma wpisać w argumenty wskazywane wskaźnikami
b0..b3 wartości kolejnych bajtów z liczby word.
Zadanie zrealizuj za pomocą arytmetyki wskaźnikowej i
odpowiedniego ich rzutowania. Przetestuj działanie funkcji. */
