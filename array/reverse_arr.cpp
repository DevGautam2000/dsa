#include "io/io.h"

void reverseArr(int a[], int n)
{

    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}
int main()
{
    io();

    int a[] = {1, 2, 3, 4};

    cout << "original array:";
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    int n = sizeof(a) / sizeof(int);
    reverseArr(a, n);

    cout << "reversed array:";
    for (auto i : a)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
