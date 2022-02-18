#pragma once
#include <bits/stdc++.h>
using namespace std;


#define console_log(x)                                                                 \
  cout << #x << " => ";                                                        \
  console::display(x);                                                                  \
  cout << endl;

#define console_logsize(x)                                                             \
  cout << "[ " << #x << " ] : SIZE =  ";                                       \
  console::size(x);                                                                     \
  cout << endl;

#define elx(x) for(int i=0; i<x; i++) cout<<endl;
#define el cout<<endl;

namespace console {


template <class T> void display(T var) { cout << var; }

template <class S> void display(S a[],int n) {
  cout << "{";
  for (int i=0 ;i<n;i++) {

    display(a[i]);
    cout << " ";
  }
  cout << "}" << endl;
}

template <class S> void display(vector<S> &vec) {
  cout << "{";
  for (auto i : vec) {

    display(i);
    cout << " ";
  }
  cout << "}" << endl;
}
template <class S> void display(list<S> &l) {
   
  for (auto i : l) 
    cout << "[" << i << "] -> ";
    
   cout << "[NULL]"<<endl;
}
template <class S> void display(set<S> &s) {
  cout << "{";
  for (auto i : s) {

    display(i);
    cout << " ";
  }
  cout << "}" << endl;
}
template <class S> void display(unordered_set<S> &s) {
  cout << "{";
  for (auto i : s) {
    display(i);

    cout << " ";
  }
  cout << "}" << endl;
}

template <class K, class V> void display(map<K, V> &mp) {
  cout << "{ ";
  for (auto it : mp) {

    display(it.first);
    cout << " : ";
    display(it.second);
    cout << ", ";
  }
  cout << "}," << endl;
}
template <class K, class V> void display(unordered_map<K, V> &mp) {
  cout << "{ ";
  for (auto it : mp) {

    display(it.first);
    cout << " : ";
    display(it.second);
    cout << ", ";
  }
  cout << "}," << endl;
}

template <class K, class V> void display(pair<K, V> &p) {
  cout << "{ ";

  display(p.first);
  cout << " : ";
  display(p.second);
  cout << ", ";
  cout << "}," << endl;
}
template <class I> void display(stack<I> s) {
  cout << "[ top -> ";
  while (!s.empty()) {
    display(s.top());
    cout << " , ";
    s.pop();
  }
  cout << "]," << endl;
}
template <class I> void display(queue<I> q) {
  cout << "[ front -> ";
  while (!q.empty()) {
    display(q.front());
    cout << " , ";
    q.pop();
  }
  cout << "]," << endl;
}

template <class L> void display(L *s) {

  while (s) {
    cout << "[" << s->val << "] -> ";
    s = s->next;
  }
  cout << "[NULL]";
}


template <class L> void size(L *s) {
  int count = 0;
  while (s) {
    count++;
    s = s->next;
  }

  cout << count;
}

} // namespace console
