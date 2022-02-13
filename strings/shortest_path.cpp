#include "io/io.h"

class Solution
{
public:
    void shortestPath(string path)
    { //*TC: O(n), SC: O(1)

        int x, y;
        x = y = 0;

        for (int i = 0; i < path.length(); i++)
        {
            switch (path[i])
            {
            case 's':
                y--;
                break;
            case 'n':
                y++;
                break;
            case 'e':
                x++;
                break;
            case 'w':
                x--;
                break;

            default:
                break;
            }
        }

        if (x >= 0 and y >= 0)
        {

            while (y--)
                cout << "n";
            while (x--)
                cout << "e";
        }
        else if (x >= 0 and y < 0)
        {

            while (y++)
                cout << "s";
            while (x--)
                cout << "e";
        }
        else if (x < 0 and y >= 0)
        {

            while (y--)
                cout << "n";
            while (x++)
                cout << "w";
        }
        else
        {
            while (y++)
                cout << "s";
            while (x++)
                cout << "w";
        }
    }
} s;

int main()
{
    io();
    cout << " Solution: ";
    s.shortestPath("ssssewe");

    return 0;
}
