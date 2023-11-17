#include <iostream>
#include <cstdlib>
const unsigned DIM1 = 5;
const unsigned DIM2 = 5;
void average(float arr[][DIM2])
{
    float output[DIM1][DIM2];
    for(int i=0; i<DIM1; ++i)
    {
        for(int j=0; j<DIM2; ++j)
        {
            float n=0;
            float sum=0;
            sum +=arr[i][j];
            ++n;
            //liczymy indeksy lewego sąsiada
            int x, y;
            x=i-1;
            y=j;
            if(x>=0){
                sum+=arr[x][y];
                ++n;
            }
            //liczymy indeksy prawego sąsiada
            x=i+1;
            y=j;
            if(x<DIM1){
                sum+=arr[x][y];
                ++n;
            }
            //liczymy indeks dolnego sąsiada
            x=i;
            y=j+1;
            if(y<DIM2){
                sum+=arr[x][y];
                ++n;
            }
            //liczymy indeks górnego sąsiada
            x=i;
            y=j-1;
            if(y>=0){
                sum+=arr[x][y];
                ++n;
            }
            float avg = sum/n;
            output[i][j] = avg;
        }
    }
    for(int i=0; i<DIM1; ++i)
    {
        for(int j=0; j<DIM2; ++j)
        {
            arr[i][j]=output[i][j];
        }

    }
}
void print(float arr[][DIM2])
{
    for(int i=0; i<DIM1; ++i)
    {
        for(int j=0; j<DIM2; ++j)
        {
            std::cout << arr[i][j]<<" ";
        }
        std::cout<<"\n";
    }
}

int main()
{

    float array[DIM1][DIM2];
    srand(time(NULL));
    for(int i=0; i<DIM1; ++i)
    {
        for(int j=0; j<DIM2; ++j)
        {
            array[i][j]=rand()%10;
        }
    }
    print(array);
    std::cout<< std::endl;
    average(array);
    print(array);
    return 0;
}
