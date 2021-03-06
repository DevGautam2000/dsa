#pragma once
#include<bits/stdc++.h>
using namespace std;


#define out(x)                                                                 \
  cerr << #x << " => ";                                                        \
  debugger::debug(x);                                                                  \
  erl;

#define outwl(x)                                                                 \
  cerr << #x << " => ";                                                        \
  debugger::debug(x);     
                                                           \
#define outsize(x)                                                             \
  cerr << "[ " << #x << " ] : SIZE =  ";                                       \
  debugger::size(x);                                                                     \
  erl;

#define elog(x)                                                                 \
  cerr << #x << " => ";                                                        \
  debugger::debug(x);                                                                  \
  erl;

#define elogwl(x)                                                                 \
  cerr << #x << " => ";                                                        \
  debugger::debug(x);     
                                                           \
#define elog_size(x)                                                             \
  cerr << "[ " << #x << " ] : SIZE =  ";                                       \
  debugger::size(x);                                                                     \
  erl;

#define espace                                                             \
  cerr << " "; 

#define espacen(x)                                                             \
  for(int i=0; i<x ;i++) cerr << " "; 


#define erl cerr<<endl;
#define erx(x) for(int i=0; i<x; i++) cerr<<endl;

namespace debugger {

template <class T> void debug(T var) { cerr << var; }

template <class S> void debug(S a[],int n) {
  cerr << "{";
  for (int i=0 ;i<n;i++) {

    debug(a[i]);
    cerr << " ";
  }
  cerr << "}" << endl;
}

template <typename... Args> void debug(tuple<Args...> tup) {
  cerr << "{";

  std::apply([](auto&&... args) {((cerr << args << " "), ...);}, tup);
  cerr << "}" << endl;
}
template <class K, class V> void debug(pair<K, V> &p) {
  cerr << "{ ";

  debug(p.first);
  cerr << " : ";
  debug(p.second);
  cerr << ", ";
  cerr << "}," << endl;
}

template <class S> void debug(vector<S> &vec) {
  cerr << "{";
  for (auto i : vec) {

    debug(i);
    cerr << " ";
  }
  cerr << "}" << endl;
}

template <class S,typename FUNCTION>
void debug(vector<S> &vec, FUNCTION f) {
    cerr << "[";
  for (auto i : vec) {
    f(i);
    cerr << " ";
  }
  cerr << "]" << endl;
}
template <class S> void debug(list<S> &l) {
   
  for (auto i : l) 
    cerr << "[" << i << "] -> ";
    
  cerr << "[NULL]"<<endl;
}
template <class S> void debug(set<S> &s) {
  cerr << "{";
  for (auto i : s) {

    debug(i);
    cerr << " ";
  }
  cerr << "}" << endl;
}
template <class S> void debug(unordered_set<S> &s) {
  cerr << "{";
  for (auto i : s) {
    debug(i);

    cerr << " ";
  }
  cerr << "}" << endl;
}

template <class K, class V> void debug(map<K, V> &mp) {
  cerr << "{ ";
  for (auto it : mp) {

    debug(it.first);
    cerr << " : ";
    debug(it.second);
    cerr << ", ";
  }
  cerr << "}," << endl;
}

template <class K, class V,typename FUNCTION>
void debug(map<K,V> &mp, FUNCTION f) {
    cerr << "{ ";
    for (auto it : mp) {

      debug(it.first);
      cerr << " : ";
      f(it.second);
      cerr << "\n";
    }
    cerr << "}," << endl;
}

template <class K, class V,typename FUNCTION>
void debug(unordered_map<K,V> &mp, FUNCTION f) {
    cerr << "{ ";
    for (auto it : mp) {

      debug(it.first);
      cerr << " : ";
      f(it.second);
      cerr << "\n";
    }
    cerr << "}," << endl;
}

template <class K, class V> void debug(unordered_map<K, V> &mp) {
  cerr << "{ ";
  for (auto it : mp) {

    debug(it.first);
    cerr << " : ";
    debug(it.second);
    cerr << ", ";
  }
  cerr << "}," << endl;
}


template <class I> void debug(stack<I> s) {
  cerr << "[ top -> ";
  while (!s.empty()) {
    debug(s.top());
    cerr << " , ";
    s.pop();
  }
  cerr << "]," << endl;
}
template <class I> void debug(queue<I> q) {
  cerr << "[ front -> ";
  while (!q.empty()) {
    debug(q.front());
    cerr << " , ";
    q.pop();
  }
  cerr << "]," << endl;
}

template <class L> void debug(L *s) {

  while (s) {
    cerr << "[" << s->val << "] -> ";
    s = s->next;
  }
  cerr << "[NULL]";erl;
}

template <class L> void size(L *s) {
  int count = 0;
  while (s) {
    count++;
    s = s->next;
  }

  cerr << count;
}

string boolify(bool n) { return n ? "true" : "false"; }
} // namespace debug