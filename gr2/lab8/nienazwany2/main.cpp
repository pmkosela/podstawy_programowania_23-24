#include <iostream>

using namespace std;

int* min(int *ptr1, int* ptr2){
    if(*ptr1 <= *ptr2){
        return ptr1;
    }else{
        return ptr2;
    }

}
float* avg(int *ptr1, int *ptr2){

    float *avg = new float;

    *avg = (*ptr1 + *ptr2)/2.0;
    return avg;
}


int main()
{
   int n = 3;
        int m = 4;
    int *ptr1;
    int *ptr2;
    ptr1 = &n;
    ptr2 = &m;
    int* k;
    k = min(ptr1, ptr2);
    cout << *k<<endl;
    float* l;
    l = avg(ptr1,ptr2);
    cout << *l<<endl;
    delete l;
    return 0;
}
