#include "io/io.h"
void printPairs(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int x = a[i];

        for (int j = i + 1; j < n; j++)
        {
            int y = a[j];

            cout << x << " " << y << endl;
        }

        cout << endl;
    }
}
int main()
{

    io();
    int a[] = {10, 20, 30, 40};
    int n = sizeof(a) / sizeof(int);

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    printPairs(a, n);
    cout << endl;

    return 0;
}
