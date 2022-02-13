#include "io/io.h"

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {

        vector<string> ans;
        for (int i = 1; i <= n; i++)
        {

            string s = "";
            if (i % 3 == 0)
                s += "Fizz";
            if (i % 5 == 0)
                s += "Buzz";
            if (s.empty())
                s = to_string(i);

            ans.push_back(s);
        }

        return ans;
    }
    vector<string> fizzBuzzSol2(int n)
    {

        vector<string> ans;
        for (int i = 1; i <= n; i++)
        {

            string s = "";
            if (i % 3 == 0)
                s += "Fizz";
            if (i % 5 == 0)
                s += "Buzz";
            if (s.empty())
                s = to_string(i);

            ans.push_back(s);
        }

        return ans;
    }
} sol;

int main()
{
    io();
    cout << " Solution: " << endl;
    auto res = sol.fizzBuzz(15);

    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    res = sol.fizzBuzzSol2(3);

    for (auto i : res)
    {
        cout << i << " ";
    }

    return 0;
}
