#include "io/io.h"

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        //    Explanation

        //!    Let's say we have an array - [2,1,4,5,2,4,1].
        //!    What we are doing is essentially this-
        //!    => 0 ^ 2 ^ 1 ^ 4 ^ 5 ^ 2 ^ 4 ^ 1
        //!    => 0^ 2^2 ^ 1^1 ^ 4^4 ^5 
        //? (Rearranging, taking same numbers together)
        //!    => 0 ^ 0 ^ 0 ^ 0 ^ 5
        //!    => 0 ^ 5
        //!    => 5

        //*TC: O(n), SC: O(1)
        int res = 0;
        for (auto i : nums)
            res ^= i;

        return res;
    }

} s;

int main()
{
    io();
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << " Solution: " << s.singleNumber(nums) << endl;

    return 0;
}
