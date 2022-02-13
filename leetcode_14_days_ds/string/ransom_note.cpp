
#include "io/io.h"

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        //*TC: O(n), SC: O(n)
        vector<int> ransom(26, 0);
        vector<int> magaz(26, 0);

        for (int i = 0; i < magazine.length(); i++)
            magaz[magazine[i] - 'a']++;

        for (int i = 0; i < ransomNote.length(); i++)
            ransom[ransomNote[i] - 'a']++;

        for (int i = 0; i < ransomNote.length(); i++)
            if (ransom[ransomNote[i] - 'a'] > magaz[ransomNote[i] - 'a'])
                return false;

        return true;
    }

} s;

int main()
{

    io();
    string ransom = "aa", magaz = "aab";
    cout << " Solution: " << s.canConstruct(ransom, magaz) << endl;

    return 0;
}
