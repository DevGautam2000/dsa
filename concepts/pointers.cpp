#include "io/io.h"

int main()
{
    io();
    int a = 10;
    int *p = &a;

    //printing an array using pointer
    int arr[] = {1, 2, 3};
    int *pointer = arr;

    cout << "the array is" << endl;

    for (auto i : arr)
    {
        cout << *(pointer++) << " ";
    }
    cout << endl;

    //creating array in heap;
    // int *pp = (int *)malloc(5 * sizeof(int)); in c
    int *pp = new int[3];
    pp[0] = 10;
    pp[1] = 20;
    pp[2] = 30;

    for (int i = 0; i < 3; i++)
        cout << pp[i] << " "; //the pointer does not advance but only the counter i

    for (int i = 0; i < 3; i++)
        cout << pp[i] << " "; //the pointer does not advance but only the counter i

    cout << endl;
    delete[] pp;
    // free(pp); for c
    return 0;
}
