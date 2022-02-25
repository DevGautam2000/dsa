#include "io/io.h"
// #include<bits/stdc++.h>

using namespace std;

class Solution{
    
    public:
    Solution(){};
    
    int goodnessString(string S,int K){
        //string is 1-indexed
        int count=0;
        for(int i=0;i<S.size()/2; i++)
            if(S[i] != S[S.size()-i-1])
               count++;
            
        int minOp=-1;
        if(minOp==K)
            minOp=0;
        else if(count>K)
            minOp=count-K;
        else minOp = K-count;
        
        
        return minOp;
    }
};
int main(){
    io();

    int T;
    cin>>T;
    int i=0;
    while(i < T){ //test cases
        
        
        int N,K;
        cin>>N>>K;
        
        string S;
        cin>>S;
        
        if(S.length()!=N)
            break;
            
        auto sol = Solution();
        int minOp=sol.goodnessString(S,K);
        
        cout<<"Case #"<<i+1<<": "<<minOp<<endl;
        i++;
    }
    
    
    
    return 0;
}