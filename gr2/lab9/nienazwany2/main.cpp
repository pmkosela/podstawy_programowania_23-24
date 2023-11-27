#include <iostream>

//unsigned int fun(unsigned int n){
//    if(n == 1 || n == 0){
//        return 1;
//    }else{

//        return fun(n-1) + 2*fun(n-2) + 3;
//    }
//}

unsigned int fun2(unsigned int n){
    int a, b;
    int new_a;
    if(n == 0 || n == 1){
        return 1;
    }else{
        a=1;
        b=1;
        for(int i=2; i<=n; ++i){
            new_a = a + 2*b + 3;
            b = a;
            a = new_a;
        }
        return new_a;
    }
}

int main()
{
    unsigned int n;
    std::cin >> n;
    std::cout << fun2(n);



    return 0;
}
