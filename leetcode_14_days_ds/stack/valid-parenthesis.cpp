#include "io/io.h"

class Solution
{
public:
    bool isValid(string s)
    {
        //*TC: O(n), SC: O(n)

        vector<char> st;
        for (int i = 0; i < s.length(); i++)

            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push_back(char(int(s[i]) < 50 ? int(s[i]) + 1 : int(s[i]) + 2));

            else
            {
                if (st.empty() || st[st.size() - 1] != s[i])
                    return false;
                st.pop_back();
            };

        return st.empty();
    }

} s;

int main()
{

    io();
    string str = "(){}";
    cout << " Solution: " << s.isValid(str) << endl;

    return 0;
}
