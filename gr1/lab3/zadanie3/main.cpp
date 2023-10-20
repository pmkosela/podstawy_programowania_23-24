#include <iostream>

int main()
{
/*    float sum = 0;
    int n;
    std::cin >> n;
    for(int i =0; i<n; ++i){
        int k;
        std::cin >> k;

        sum += k;
    }
    std::cout << sum/n; */
    float max = 0;
    int n;
    std::cin >> n;
    for(int i =0; i<n; ++i){
        int k;
        std::cin >> k;
        if(max < k){
            max = k;
        }
    }
    std::cout << max;


    return 0;
}
