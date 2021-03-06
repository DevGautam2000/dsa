#include "io/io.h"

class Solution
{
public:
    void reverseString(vector<char> &s)
    {

        for (int i = 0; i < s.size() / 2; i++)
        {

            char temp = s[i];
            s[i] = s[s.size() - i - 1];
            s[s.size() - i - 1] = temp;
        }
        }
} sol;

int main()
{
    io();
    vector<char> c = {'h', 'e', 'l', 'l', 'o'};
    cout << " Solution: ";
    sol.reverseString(c);
    for (auto i : c)
    {
        cout << i << " ";
    }

    return 0;
}
