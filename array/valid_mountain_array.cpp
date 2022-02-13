#include "io/io.h"

class Solution{
public:

  bool validMountainArray(vector<int>& arr) {
        
       //* TC: O(n), SC: O(1)
          int length = arr.size();
          int i = 0;
          while (i < length - 1 && arr[i] < arr[i + 1])
          i++;
        
          if (i == length - 1 || i == 0)
               return false;

          while (i < length - 1 && arr[i] > arr[i + 1])
               i++;
        
          if (i == length - 1)
               return true;

        
        return false;
    }  
} s;

int main(){
    io();
    vector<int> arr = {3,5,4,3};

    /*

     valid mountain

               5
             /   \
            /     4
           /       \        
          3         3
    */
    cout << " Solution: " <<  boolify(s.validMountainArray(arr)) << endl;

    return 0;
}

