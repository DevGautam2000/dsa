#include "io/io.h"

class Solution
{
public:
    int tribonacciRecursive(int n)
    {
        //bad approach as it takes lot of time and space
        //gives TLE for large values
        if (n <= 1)
            return n;
        if (n == 2)
            return 1;

        return tribonacciRecursive(n - 1) + tribonacciRecursive(n - 2) + tribonacciRecursive(n - 3);
    }
    int tribonacci(int n)
    {
        int mem[n + 3];
        mem[0] = 0;
        mem[1] = mem[2] = 1;

        for (int i = 3; i <= n; i++)
            mem[i] = mem[i - 1] + mem[i - 2] + mem[i - 3];

        return mem[n];
    }

} s;

int main()
{
    io();
    cout << "Recursive Solution: " << s.tribonacciRecursive(4) << endl;
    cout << "DP Solution: " << s.tribonacci(37) << endl;

    return 0;
}
