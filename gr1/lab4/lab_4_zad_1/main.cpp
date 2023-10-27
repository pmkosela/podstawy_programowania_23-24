#include <iostream>
#include <cstring>

int main()
{
    const int P = 16;
    const int Q = 16;

    int matrix[P][Q];

    for(int i = 0; i<P; ++i)
    {

        for(int j = 0; j<Q; ++j)
        {
            matrix[i][j]=i*j;
        }



    }

    for(int i = 0; i<P; ++i)
    {

        for(int j = 0; j<Q; ++j)
        {
            std::cout << std::hex << matrix[i][j] << "\t";
        }

        std::cout << std::endl;

    }
}

