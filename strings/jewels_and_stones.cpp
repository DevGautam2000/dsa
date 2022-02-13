#include "io/io.h"

class Solution{
public:

 int numJewelsInStones(string jewels, string stones) {
        
        //! j=jewels.size() & s=stones.size();
        //* TC: O(n), SC: O(j+s)
        unordered_set<char> set;
        
        for(auto c: jewels)
            set.insert(c);
        
        int count=0;
        for(auto c: stones)
            if(set.count(c)) count++;
        
        return count;
    }   



} s;

int main(){
    io();
    string jewels = "aA", stones = "aAAbbbb";
    cout << "Solution: " <<  s.numJewelsInStones(jewels,stones) << endl;

    return 0;
}

