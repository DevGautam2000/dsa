
#include "io/io.h"

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {

        //base condition
        if (s.length() == 0 && t.length() == 0)
        {
            return true;
        }

        //check for string one
        int i = 0;
        string sString = "";
        while (s[i] != '\0')
        {
            if (s[i] == '#')
                sString.pop_back();
            else
                sString += s[i];

            i++;
        }

        //check for string two
        i = 0;
        string tString = "";
        while (t[i] != '\0')
        {
            if (t[i] == '#')
                tString.pop_back();
            else
                tString += t[i];

            i++;
        }

        if (sString == tString)
            return true;
        return false;
    }
} s;

int main()
{
    io();
    string a = "ab##";
    string t = "c#d#";
    cout << "Linear Solution: " << s.backspaceCompare(a, t) << endl;

    return 0;
}
