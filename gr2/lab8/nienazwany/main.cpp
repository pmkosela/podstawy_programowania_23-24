#include <iostream>

using namespace std;

const int N = 5;

double* subsequence(double arr[], double min, double max, int *size_out);
double* subsequence_alt(double arr[], double min, double max, int *size_out);

int main()
{
    double arr[N] = {0.6, 2.1, 4.2, 6.5, 7.5};

    int n_out;

    double min = 0;
    double max = 7.1;

//    for(int i = 0; i < N; ++i)
//    {
//        cin >> arr[i];
//    }

    double *subarray = subsequence_alt(arr, min, max, &n_out);

    for (int i = 0; i < n_out; ++i)
    {
        cout << subarray[i] << endl;
    }
}

double* subsequence(double arr[], double min, double max, int *size_out)
{



    for (int i = 0; i < N; ++i)
    {
        if (arr[i] >= min && arr[i] <= max)
        {
            *size_out += 1;
            cout << "sizeout" << *size_out << endl;
        }
    }

    double *subarr;
    subarr = new double[*size_out];

    unsigned j = 0;
    for (int i = 0; i < N; ++i)
    {
        if (arr[i] >= min && arr[i] <= max)
        {
            subarr[j] = arr[i];
            j++;
            cout << "sarr" << subarr[i] << endl;
        }
        cout << "arr" << arr[i] << endl;
    }

    return subarr;
}

/*double* subsequence_alt(double arr[], double min, double max, int *size_out) {
    double* new_arr = new double[N];
    *size_out = 0;

    for (int i = 0; i < N; ++i) {
        if (arr[i] >= min && arr[i] < max) {
            new_arr[*size_out] = arr[i];
            *size_out += 1;
        }
    }

    double* ptr = new_arr + *size_out;

    cout << sizeof(new_arr) << " - " << sizeof(ptr) << endl;

    delete[] ptr;

    return new_arr;
}*/
