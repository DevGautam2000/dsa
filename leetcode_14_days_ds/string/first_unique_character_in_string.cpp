
#include "io/io.h"

class Solution
{
public:
    int firstUniqChar(string st)
    {
        //*TC: O(n), SC: O(n)
        unordered_map<char, int> map(st.length());

        for (auto i : st)
            map[i] = -2;

        for (int i = 0; i < st.length(); i++)
            if (map[st[i]] == -2)
                map[st[i]] = i;
            else
                map[st[i]] = -3;

        for (auto i : st)
            if (map[i] == -3)
                continue;
            else
                return map[i];

        return -1;
    }

    int firstUniqCharSecApproach(string st)
    {
        vector<int> address(st.length(), 0);
        for (auto c : st)
        {
            address[c - 'a']++;
        }

        for (int i = 0; i < address.size(); i++)
        {
            if (address[st[i] - 'a'] == 1)
                return i;
        }

        return -1;
    }
} s;

int main()
{
    //*TC: O(), SC: O()
    io();
    string str = "leetcode";
    cout << " Solution 1: " << s.firstUniqChar(str) << endl;
    cout << " Solution 2: " << s.firstUniqCharSecApproach(str) << endl;

    return 0;
}
