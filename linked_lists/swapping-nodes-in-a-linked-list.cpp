#include "io/io.h"

class Solution{
public:

 ListNode* swapNodes(ListNode* head, int k) {
        
        //* TC: O(n), SC: O(1)
        
        auto c = head;
        int size=0;
        while(c)
            size++ , c=c->next;
        
        int left = k;
        int right = size-k+1;
        
        auto lp=head,rp=head;
        for(int i=1; i<left; i++)
            lp=lp->next;
        
        for(int i=1; i<right; i++)
            rp=rp->next;
        
        swap(lp->val,rp->val);    

        return head;
    }  

 ListNode* swapNodesOnePass(ListNode* head, int k) {
        
        
        ListNode *n1=nullptr , *n2=nullptr;

        for(auto c=head; c != NULL; c=c->next){
        	n2 = n2 ? n2->next : nullptr;

        	if(--k == 0){
        		n1=c;
        		n2=head;
        		//n2 will reach the (end - kth) node when c becomes null
        	}
        } 

        swap(n1->val,n2->val);
        return head;
    }
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> nodes =  {7,9,6,6,7,8,3,0,9,5};
    int k=5;
    auto head1 = ln::createList(nodes);
    auto head2 = ln::createList(nodes);

    auto res = s.swapNodes(head1,k);
    display(res);
    elx(2); //end line

    res = s.swapNodes(head2,k);
    display(res);

    return 0;
}

