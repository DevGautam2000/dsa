#include "io/io.h"

class Solution
{
public:
    int fibRecursive(int n)
    {
        if (n < 2)
            return n;
        return fib(n - 1) + fib(n - 2);
    }
    int fib(int n)
    {

        //using dp
        int dp[2] = {0}; //for memoizing

        if (n < 2)
            return n;

        if (dp[n & 1])
            return dp[n & 1];

        return dp[n & 1] = fib(n - 1) + fib(n - 2);
    }
} s;

int main()
{
    io();
    cout << "Recursive Solution: " << s.fibRecursive(4) << endl;
    cout << "DP Solution: " << s.fib(8) << endl;

    return 0;
}
