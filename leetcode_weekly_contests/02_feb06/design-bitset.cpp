#include "io/io.h"

//! TLE FOR LARGE NUMS
//? NOT OPTIMIZED

class Bitset {
    vector<int> biset;
public:
    Bitset(int size) {
        biset.resize(size,0);
    }
    
    void fix(int idx) {
        biset[idx]=1;
    }
    
    void unfix(int idx) {
         biset[idx]=0;
    }
    
    void flip() {
        for(auto &i: biset)
            if(i) i=0;
            else i=1;
    }
    
    bool all() {
        for(auto i:biset)
            if(!i) return false;
        
        return true;
    }
    
    bool one() {
        for(auto i:biset)
            if(i) return true;
        
        return false;
    }
    
    int count() {
        int c=0;
        for(auto i:biset)
            if(i) c++;
        
        return c;
    }
    
    string toString() {
        
        string ans="";
        
        for(auto i:biset)
            ans+= to_string(i);
        
        return ans;
    }
};


int main(){
    io();
    cout << " Solution: " << endl;
   

  Bitset* obj = new Bitset(5);
  obj->fix(3);
  obj->fix(1);
  obj->flip();
  cout<<boolify(obj->all())<<endl;
  obj->unfix(0);
  obj->flip();
  cout<< boolify(obj->one())<<endl;
  obj->unfix(0);
  cout<<obj->count()<<endl;
  cout<<obj->toString()<<endl;
 
    return 0;
}

