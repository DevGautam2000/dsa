
#include "io/io.h"

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        //put it in a map

        int l, r;
        l = r = 0;

        map<char, int> sub;

        //TC: O(n) , SC: O(n)
        int length = 0;
        while (r < s.length())
        {
            if (sub.count(s[r]))           //if in map jump the left pointer
                l = max(sub[s[r]] + 1, l); //left wo be updated if s[r] in range of l - r

            sub[s[r]] = r;                 //update the value
            length = max(length, ++r - l); //length of r-l
        }

        return length;
    }
} s;

int main()
{
    io();
    cout << "Linear Solution: "
         << s.lengthOfLongestSubstring("pwwkew") << endl;

    return 0;
}
