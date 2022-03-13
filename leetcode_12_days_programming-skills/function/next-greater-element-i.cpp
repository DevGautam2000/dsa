#include "io/io.h"

class Solution{
public:

 vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> m;
        
        for (int n : nums) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        
        vector<int> ans;
        for (int n : findNums) 
            ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }  
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> nums1 = {4,1,2}, nums2 = {1,3,4,2};
    auto res = s.nextGreaterElement(nums1,nums2);
    console::display(res);

    return 0;
}

