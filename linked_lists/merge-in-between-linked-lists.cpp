#include "io/io.h"

class Solution{
public:

     ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        //* TC: O(n), SC: O(1)

        auto p1=list1,p2=list1;
        int i;

        //traverse till a-1
        for(i=0; i<a-1 && p1; i++)
            p1=p1->next;
        
        p2=p1; //point p2 till a-1

        //traverse till b
        for(; i<=b && p2; i++)
            p2=p2->next;
        
        p1->next=list2; //point a-1 node to list2 head

        // traverse till list2 end
        auto p3=list2;
        while(p3->next)
            p3=p3->next;
        
        //point end node of list2 to b->next node
        p3->next=p2;
        p2->next=nullptr; //free the b node
            
        return list1;
    } 
} s;

int main(){
    io();
    cout << " Solution: " << endl;
    vector<int> l1={0,1,2,3,4,5};
    vector<int> l2={1000000,1000001,1000002};

    auto list1 = createList(l1);
    auto list2 = createList(l2);
    int a = 3, b = 4;

    auto res = s.mergeInBetween(list1 ,a ,b ,list2);
    console::display(res);

    return 0;
}

