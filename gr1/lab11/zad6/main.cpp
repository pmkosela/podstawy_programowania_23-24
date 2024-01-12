#include <iostream>
class Matrix{
    float arr[3][3];
public:
    void print(){
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                std::cout<<this->arr[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
    }
    void setArr(float val, int x, int y){
        if(x<3&&x>=0&&y<3&&y>=0){
            this->arr[x][y]=val;
        }
    }
    void multiply(float value){
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                this->arr[i][j]*=value;
            }
        }
    }
};

using namespace std;

int main()
{
    Matrix m;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            m.setArr(i+j, i,j);

        }
    }
    m.multiply(3);
    m.print();
    return 0;
}
