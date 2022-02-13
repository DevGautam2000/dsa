#include "io/io.h"

class Solution
{
public:
    int reverse(int x)
    {

        if (x == 0)
            return 0;
        int sign = x / abs(x);
        string s = to_string(abs(x));
        s = string(s.rbegin(), s.rend());

        if (sign * stoll(s) > INT_MAX || sign * stoll(s) < INT_MIN)
            return 0;

        return sign * stoll(s);
    }
} sol;

int main()
{
    io();
    string name;
    cin>>name;
    cout<<"name: "<<name<<endl;
    cout << " Solution: " << sol.reverse(-3664) << endl;

    return 0;
}

