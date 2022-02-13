#include "io/io.h"

void getSubarrays(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            for (int k = i; k < j; k++)
            {
                cout << a[k] << " ";
            }

            cout << endl;
        }
    }
}
int main()
{

    io();
    int a[] = {2, 3, 4, 5, 6, 7};
    int size = sizeof(a) / sizeof(int);
    getSubarrays(a, size);
    return 0;
}
