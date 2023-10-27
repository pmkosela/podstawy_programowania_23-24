#include <iostream>

using namespace std;

int main()
{
    const int LENGTH = 5;
    int array[LENGTH];
    //const int x=112;
    for(int i=0; i<LENGTH; ++i)
    {
        cin >> array[i];
        switch(array[i]){
        case 7:
            cout << "szczescie";
            break;
        case 13:
            cout << "nieszczescie";
            //break;
        case -1:
            cout << "i kwadrat";
            break;
        }
    }
    for(int i=0; i<LENGTH; ++i)
    {
        cout << array[i] << " ";
    }


    return 0;
}
