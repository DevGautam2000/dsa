/*
          AUTHOR : GAUTAM CHANDRA SAHA
          DATE & TIME: Sun, October 31,2021 AT 00:26 
          DESCRIPTION:

*/

#include "io/io.h"

struct guitar
{
    int keys;
    int strings;
    string tuning;
} g;

int main()
{
    g.keys = 10;
    g.strings = 12;
    g.tuning = "e standard";

    cout << g.tuning << endl;
    return 0;
}
