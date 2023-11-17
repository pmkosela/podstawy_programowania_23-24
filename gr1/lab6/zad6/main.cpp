#include <iostream>

bool ispow(unsigned int a){
    unsigned int mask=1;
    bool one=false;
    while(mask<a){
        if(one==true && mask&a!=0){
            return false;

        }
        if(mask&a!=0){
            one=true;
        }

        mask<<1;
    }
    return true;
}

int main()
{
    unsigned int input;
    std::cin >>input;
    std::cout<<ispow(input);

    return 0;
}
