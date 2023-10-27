//Napisz program, który porówna dwa napisy i wypisze liczbę całkowitą: (1) równą zero, jeżeli oba napisy są identyczne lub (2) mniejszą od zera, jeżeli napis pierwszy jest wcześniej alfabetycznie niż napis drugi lub (3) większą od zera, jeżeli napis pierwszy jest później alfabetycznie niż napis drugi. Jest to ekwiwalent funkcji bibliotecznej strcmp().

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int N = 30;

    char string1[N];
    char string2[N];

//    for (int j = 0; j < N; ++j)
//    {
//        string[j] = '_';
//    }
//    std::cin >> string;

//    std::cout << string;

    scanf("%s", &string1);
    scanf("%s", &string2);

//    printf("%s\n", string1);

//    for (int i = 0; i < N; ++i)
//    {
//        cout << string[i] << endl;
//    }

//    int length = 0;

//    while (string1[length] != '\0')
//    {
//        length++;
//    }

//    cout << length << endl;

    int curr_idx = 0;

    while (string1[curr_idx] == string2[curr_idx] && string1[curr_idx] != '\0')
    {
        ++curr_idx;
    }

    char c1 = string1[curr_idx];
    char c2 = string2[curr_idx];

    if (c1 == c2)
    {
        cout << 0 << endl;
    }
    else if (c1 > c2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    cout << strcmp(string1, string2) << endl;

    return 0;
}
