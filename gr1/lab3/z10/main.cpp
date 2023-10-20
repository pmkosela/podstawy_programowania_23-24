#include <iostream>

using namespace std;

int main()
{
    int n,m;
    bool hash_next = true;
    cin >> n >> m;
    for(int i = 0; i<n; i++){

        for(int j = 0; j<n; j++){

            if(hash_next){
                cout << "#";
            }else{
                cout << "o";
            }
            hash_next = !hash_next;

        }
        cout << endl;
    }

    /*
     * Te pętle są równoważne:

    int k = 0;
    while(k < 10) {
        std::cout << k << std::endl;
        ++k;
    }

    for(int k = 0; k < 10; ++k) {
        std::cout << k << std::endl;
    }*/




    return 0;
}
