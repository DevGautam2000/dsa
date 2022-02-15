#include "io/io.h"

class Solution{
	set<int> visited;
   int largest=0;
public:

 int largestComponentSize(unordered_map<int,vector<int>> graph){    
 	//* TC: O(e), SC: O(n)

   for(auto node : graph )
         largest=max(largest,explore(graph, node.first));
   
   return largest;
 }   

 int explore( unordered_map<int,vector<int>> graph , int node){

      if(visited.count(node)) return 0;

      visited.insert(node);
      int count=1;
      for(auto neighbour : graph[node])
         count += explore(graph,neighbour);

   return count;
 }
} s;

int main(){
    io();
    cout << " Solution: "  << endl;
    unordered_map<int,vector<int>> graph = {
      {0 , {8, 1, 5} },
      {1 , {0} },
      {5 , {0, 8} },
      {8 , {0, 5} },
      {2 , {3, 4} },
      {3 , {2, 4} },
      {4 , {3, 2} },
    };

    cout<<s.largestComponentSize(graph);

    return 0;
}

