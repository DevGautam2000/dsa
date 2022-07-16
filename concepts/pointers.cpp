#include "io/io.h"

void sum(int *a[], int n){
        console::display(*a,n);
}


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

    int k[4] = {1,2,3,4};
    int *g[4]= {&k[0],&k[1],&k[2],&k[3]};
    el;
    sum(g,4);


    cout << endl;
    delete[] pp;
    // free(pp); for c
    return 0;
}
