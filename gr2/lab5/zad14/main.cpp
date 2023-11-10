#include <iostream>

using namespace std;

int order(int arr[], int x, int t);
void sort(int arr[], int x);

int main()
{
    const int N = 10;

    int arr[N];

    for (int i = 0; i < N; ++i)
    {
        cin>>arr[i];
    }

    order(arr, N, 0);

    for (int i = 0; i < N; ++i)
    {
        cout<<arr[i]<<endl;;
    }

}

int order(int arr[], int x, int t)
{
    for (int i = 0; i < x; ++i)
    {
        for (int j = i+1; j < x; ++j)
        {
            if(arr[i] == t && arr[j] != t)
            {
                int v = arr[i];
                arr[i] = arr[j];
                arr[j] = v;
            }
        }
    }
    for(int i = 0; i < x; ++i)
    {
        if (arr[i] == t)
            return i-1;
    }
    return 0;
}

void sort(int arr[], int x)
{
    int max = arr[0];
    for(int i = 1; i < x; ++i)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    int last_ind = order(arr, x, max);

    if (last_ind >= 0)
        sort(arr, last_ind+1);
}
