//
// Created by Gautam Saha on 21/01/22.
//

#include "io/io.h"

class Solution{
public:
  vector<int> productExceptSelf(vector<int>& nums) {
    // * TC: O(), SC: O()


      vector<int> products(nums.size());
      products[0] = 1;

      for(int i=1; i<nums.size(); i++)
        products[i] = nums[i-1] * products[i-1];

      int v=1;
      for(int i=nums.size()-1; i>=0; i--){
        products[i] = products[i]*v;
        v *= nums[i];
      }

      return products;
    }
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> nums={1,2,3,4};
    auto res = s.productExceptSelf(nums);
    display(res);
    return 0;
}


