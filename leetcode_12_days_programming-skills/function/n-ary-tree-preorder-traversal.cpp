#include "io/io.h"

namespace nary{
// Definition for a Node.
class Nod {
public:
    int val;
    vector<Nod*> children;

    Nod() {}

    Nod(int _val) {
        val = _val;
    }

    Nod(int _val, vector<Nod*> _children) {
        val = _val;
        children = _children;
    }
};
}
using namespace nary;

class Solution{
public:
vector<int> preorder(Nod* root) {
        vector<int> ans;
        
        function<void (Nod*)> traverse = [&](Nod* r){
        
                if(!r) return;

                //preorder
                ans.push_back(r->val);
                for(auto child: r->children)
                    traverse(child);
                };
        
        traverse(root);
        
        return ans;
    } 
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    auto three = new Nod(3, vector<Nod*>{
    	new Nod(5),
    	new Nod(6),
    });
    auto root = new Nod(1,vector<Nod*>{
    	three,
    	new Nod(2),
    	new Nod(4),
    });

    auto res = s.preorder(root);
    console::display(res);
    return 0;
}

