#include "io/io.h"

class Solution
{
public:
    string stripped(string old)
    {
        string news = "";
        for (int j = 0; j < old.length(); j++)
        {
            char c = tolower(old[j]);
            if (isalnum(c))
                news += c;
        }

        return news;
    }

    string reversed(string old)
    {
        string news = "";
        for (int j = old.length() - 1; j >= 0; j--)
            news += old[j];

        return news;
    }
    bool isPalindrome(string s)
    {

        //*TC: O(n), SC: O(n)
        string stripped = this->stripped(s);
        string reversed = this->reversed(stripped);

        if (stripped == reversed)
            return true;

        return false;
    }
    bool isPalindromeTwoPointer(string s)
    {
        //*TC: O(n), SC: O(1)
        int f = 0, r = s.length() - 1;
        while (f < r)

            if (!isalnum(s[f]))
                f++;
            else if (!isalnum(s[r]))
                r--;
            else if (tolower(s[f]) != tolower(s[r]))
                return false;

            else
            {
                f++;
                r--;
            }

        return true;
    }

} s;

int main()
{
    io();
    string str = "race a car";
    // cout << " Solution: " << s.isPalindrome(str) << endl;
    cout << " Solution: " << s.isPalindromeTwoPointer(str) << endl;

    return 0;
}
