#include <iostream>

int *max(int *first, int *second){
    if(*first<*second){
        return second;
    }else{
        return first;
    }
}

float *avg(int *first, int *second){
    float *avg;
    //while(true){
    avg =new float;
    //}
    *avg = (float)(*first + *second)/2;
    return avg;
}

int main()
{
    int a=4;
    int b=7;
    int *result=max(&a, &b);
    std::cout<<*result;
    float *result2 = avg(&a, &b);
    std::cout<<*result2<<" ";
    delete result2;
    std::cout<<*result2;
    return 0;
}
