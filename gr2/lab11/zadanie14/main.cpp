#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
enum Connection {DISCONNECTED, CONNECTED, CONNECTING = 100};
class Computer{
    Connection status;
    unsigned char ip[4];
public:
    Connection get_status(){
        return status;
    }
    void set_status(Connection s){
        status = s;
    }
    void set_ip(char* ip){
        char* number[4];
        number[0] = strtok(ip,".");
        int i = 1;
        while (i < 4)
        {
            number[i] = strtok(NULL, ".");
            ++i;
        }
        for(int i = 0; i < 4; ++i){
            this -> ip[i] = atoi(number[i]);

        }
    }
};



int main()
{
    Computer computer1;
    Computer computer2;
    computer1.set_status(CONNECTING);
    cout<<computer1.get_status();
    return 0;
}
