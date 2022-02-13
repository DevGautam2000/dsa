
#include "io/io.h"

class Solution
{
public:
    bool isAnagram(string s, string t)
    { //*TC: O(n), SC: O(1)

        if (s.length() != t.length())
            return false;

        vector<int> a(26, 0);
        vector<int> b(26, 0);

        for (int i = 0; i < s.length(); i++)
        {
            a[s[i] - 'a']++;
        }
        for (int i = 0; i < t.length(); i++)
        {
            b[t[i] - 'a']++;
        }

        for (int i = 0; i < s.length(); i++)
            if (a[s[i] - 'a'] > b[s[i] - 'a'])
                return false;

        return true;
    }

} sol;

int main()
{

    io();
    string s = "a";
    string t = "ab";
    cout << " Solution: " << sol.isAnagram(s, t) << endl;

    return 0;
}
