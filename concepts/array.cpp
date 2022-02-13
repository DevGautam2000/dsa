#include "io/io.h"

int main()
{
    io();
    int n = 10;
    int a[n];
    cout << "gjhb"
         << endl
         << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (auto i : a)
    {
        cout << i << "-";
    }

    return 0;
}