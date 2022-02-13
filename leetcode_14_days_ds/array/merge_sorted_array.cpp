#include "io/io.h"

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        //TC: O(m+n), SC: O(1)
        if (nums2.size() == 0)
            return; //stop if 2nd array has no values

        // taking counters/two pointer approach;
        int p1 = m - 1;
        int p2 = n - 1;

        int p3 = m + n - 1;

        // start filling from the back

        while (p2 >= 0 && p1 >= 0)
        {
            if (nums1[p1] > nums2[p2])
                nums1[p3--] = nums1[p1--];
            else
                nums1[p3--] = nums2[p2--];
        }

        //if any one array is not traversed
        while (p1 >= 0)
            nums1[p3--] = nums1[p1--];
        while (p2 >= 0)
            nums1[p3--] = nums2[p2--];
    }
} s;

int main()
{
    io();
    vector<int> newCopy = {4, 0, 0, 0, 0, 0};
    vector<int> nums2 = {1, 2, 3, 5, 6};
    int m = 1;
    int n = 5;

    // [0]
    // 0
    // [1]
    // 1
    cout << " Solution: ";
    s.merge(newCopy, m, nums2, n);
    for (auto i : newCopy)
    {
        cout << i << " ";
    }
    return 0;
}
