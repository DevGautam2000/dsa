#include "io/io.h"

class BrowserHistory {
public:
   struct ListNode {
      string val;
      ListNode *next;
      ListNode *prev;
      ListNode() : val(0), next(nullptr) ,prev(nullptr) {}
      ListNode(string x) : val(x), next(nullptr),prev(nullptr) {}
      ListNode(string x, ListNode *next,ListNode *prev) : val(x), next(next) ,prev(prev) {}
  };
    ListNode * home, *curr;
    
    BrowserHistory(string homepage) {
        home=new ListNode(homepage);
        curr=home;
        
    }
    
    void visit(string url) {
        ListNode* temp=new ListNode(url);
        curr->next=temp;
        temp->prev=curr;
        curr=temp;
    }
    
    string back(int steps) {
        while(steps && curr->prev!=NULL){
            curr=curr->prev;
            steps--;
        }
        return curr->val;
    }
    
    string forward(int steps) {
        while(steps && curr->next!=NULL){
            curr=curr->next;
            steps--;
        }
        return curr->val;
    }
};

int main(){
    io();

    cout << " Solution: " <<  endl;
    BrowserHistory* obj = new BrowserHistory("leetcode.com");
 	obj->visit("google.com");
 	obj->visit("facebook.com");
 	obj->visit("youtube.com");
	cout<<obj->back(1)<<endl;
	cout<<obj->back(1)<<endl;
 	cout<<obj->forward(1)<<endl;
 	obj->visit("linkedin.com");
 	cout<<obj->forward(2)<<endl;
 	cout<<obj->back(2)<<endl;
	cout<<obj->back(7)<<endl;

    

    return 0;
}

