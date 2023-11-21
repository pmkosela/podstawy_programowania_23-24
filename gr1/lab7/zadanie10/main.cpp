#include <iostream>

bool fun(int a)
{
    if(a==1)
        return false;
    if(a==2)
        return true;
    if(a%2==0)
        return false;
    for(int i=3; i*i<=a; i+=2){
        if(a%i==0)
            return false;
    }
    return true;
}

int main()
{
    int a, b;
    std::cin>> a >> b;
    if(a>b){
        int a1;
        a1=a;
        a=b;
        b=a1;
    }
    for(int i=a; i<=b; ++i){
        if(fun(i))
            std::cout<<i<<" ";
    }

    return 0;
}
