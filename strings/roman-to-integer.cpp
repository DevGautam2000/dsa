#include "io/io.h"

class Solution{
public:

 int romanToInt(string s) {
        unordered_map<char,int> mp= {
                        {'I',1},
                        {'V',5}, 
                        {'X',10}, 
                        {'L',50},
                        {'C',100}, 
                        {'D',500}, 
                        {'M',1000}};
		
        
        int num=0;
        int i;
    
        for(i=0; i<s.size()-1; i++){
            if(mp[s[i]] >= mp[s[i+1]])
                num += mp[s[i]];
            else
                num += mp[s[i+1]]-mp[s[i]],i++;
        }
        
        while(i < s.size()) num += mp[s[i++]];
        
        return num;
    }  
} sol;

int main(){
    io();
    cout << " Solution: " <<  sol.romanToInt("MCMLXXVI") << endl;
int num=3;
vector<int> levels; //constant as is always 4
        
        int counter=3;
        while(counter >= 0 ){
                int p = pow(10,counter);
                levels.push_back(num / p);
                num %= p;
                counter--;
        }

        display(levels);
        
    return 0;
}

