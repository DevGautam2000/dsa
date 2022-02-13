#include "io/io.h"

class Solution
{
public:
    vector<string> split(string s)
    {

        string word = "";
        int i = 0;
        vector<string> w;
        while (s[i] != '\0')
        {

            if (s[i] == ' ')
            {
                w.push_back(word);
                word = "";
            }

            else
                word += s[i];
            i++;
        }
        w.push_back(word);
        return w;
    }
    string capitalizeTitle(string title)
    {

        auto res = split(title);
        int j = 0;

        for (auto s : res)
        {

            transform(s.begin(), s.end(), s.begin(), ::tolower);
            if (s.length() > 2)
                s[0] = toupper(s[0]);

            res[j] = s;

            j++;
        }

        string finals = "";
        for (auto s : res)
        {
            finals += s + " ";
        }

        return finals;
    }
} sol;

int main()
{
    io(current_path());
    string title = "i lOve leetcode";
    cout << " Solution: ";
    cout << sol.capitalizeTitle(title);

    return 0;
}