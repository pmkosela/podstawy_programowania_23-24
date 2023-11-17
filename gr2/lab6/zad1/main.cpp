#include <iostream>

using namespace std;

const int N = 5;

void average(double arr[][N]);
void print(double arr[][N]);

int main()
{


    double arr[N][N];

    srand(time(0));

    for(int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            arr[i][j] = (rand()%10)+1;
        }
    }

    print(arr);
    cout << endl;
    average(arr);
    print(arr);
}

void average(double arr[][N])
{
    double arr_sec[N][N];


    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            double sum = 0;
            double num = 0;

            sum += arr[i][j];

            // też nie działa :)
            if (i-1 >= 0 && i+1 < N && j-1 >= 0 && j+1 < N)
            {
                sum += arr[i-1][j];
                sum += arr[i+1][j];
                sum += arr[i][j-1];
                sum += arr[i][j+1];
            }


//            for (int n = i-1; n <= i+1; ++n)
//            {

//                if (n>=0 && n <= i+1)
//                {
//                    num += 1;
//                    sum += arr[n][j];


//                    if (n == i && j-1 >= 0 && j+1 < N)
//                    {
//                        sum += arr[n][j-1];
//                        sum += arr[n][j+1];
//                    }

//                }

//            }
//


        }
    }

    for(int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            arr[i][j] = arr_sec[i][j];
        }
    }

}

void print(double arr[][N])
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
}
