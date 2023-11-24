#include <iostream>
/*
 * Napisz funkcję,
 * która przyjmie jako argumenty tablicę wartości
 * zmiennoprzecinkowych,
 * jej rozmiar,dwie wartości zmiennoprzecinkowe
 * - minimum i maksimum,
 * oraz wskaźnik n_out ustawiony na zmienną typu całkowitego.
 * Funkcja powinna zaalokować i zwrócić tablicę,
 * w której znajdą się liczby
 * z lewostronnie domkniętego przedziału od
 * minimum do maksimum.
 * Pod wartością wskaźnika n_out z argumentu
 * należy zapisać rozmiar nowoutworzonej tablicy.
*/

float *arr_fun(float arr[], int size, float min, float max,
             int*n_out)
{
    float *arr2 = new float[size];
    int j = 0;
    for(int i = 0;i < size;++i)
    {
        if(arr[i] >= min && arr[i] < max)
        {
            arr2[j] = arr[i];
            ++j;
        }
    }
    if((j + 1) < (size - 1))
    {
        float *trash1 = &arr2[j+1];
        delete trash1;
    }
    *n_out = j;
    return arr2;
}

int main()
{
    const int size = 10;
    int n_out;
    float arr[size] = {0.5,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
    float *arr2 = arr_fun(arr, size, 1.5, 4.2,&n_out);
    for(int i=0;i<n_out;++i)
    {
        std::cout<<arr2[i]<<" "<<std::endl;
    }
    return 0;
}
