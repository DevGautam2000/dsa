#include "io/io.h"

class Solution
{
public:
    int myAtoi(string s)
    {

        int i = 0;
        char sign = '+';
        string num = "";

        while (s[i] != '\0')
        {

            if (s[i] == ' ')
            {
                i++;
                continue;
            }
            if (s[i] == '-')
            {
                sign = s[i];
                i++;
                continue;
            }
            if (isdigit(s[i]))
            {
                num += s[i];
                i++;
                continue;
            }
            break;
        }

        int n = 0;
        int size = num.length() - 1;
        for (int i = size; i >= 0; i--)
            n += (num[i] - '0') * pow(10, size - i);

        if (sign == '-')
            n *= -1;
        return n;
    }
} l;

int main()
{
    io();
    cout << " Solution: " << l.myAtoi("   -42") << endl;

    return 0;
}
