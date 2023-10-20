#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    for(int j = 0; j <= n; ++j){


        for(int i = 0; i <= n; ++i){
            if(i==j)
                break;
                //continue;
            std::cout << i*j << " ";
        }
        std::cout << std::endl;
    }


    return 0;
}
