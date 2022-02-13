#include "io/io.h"

int main()
{
    io();
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        int k = 0;
        for (k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }
        for (; k < n; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
