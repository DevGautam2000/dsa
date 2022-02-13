#include "io/io.h"

class Solution
{
public:
    int climbStairs(int n)
    {

        int mem[n + 1];
        mem[1] = 1;
        mem[2] = 2;

        if (n <= 2)
            return mem[n];

        for (int i = 3; i <= n; i++)
            mem[i] = mem[i - 1] + mem[i - 2];

        return mem[n];
    }
} s;

int main()
{
    io();
    cout << "DP Solution: " << s.climbStairs(6) << endl;

    return 0;
}
