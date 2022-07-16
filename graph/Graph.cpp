#include "io/io.h"

template <class T>
class Graph{

	T vertices;
	list<T> *lp;
public:

	Graph(T v){ 
		vertices=v;
		lp = new list<T>[vertices];
	}


	void addEdge(T v1, T v2, bool undirected=true){

		lp[v1].push_back(v2);
		if (undirected)
			lp[v2].push_back(v1);
		
	}

	void print(){
		cout<<"Adjacency List"<<endl<<endl;
		for(int nodes=0; nodes<vertices; nodes++){

			cout<<nodes<<" -> [ ";
			for(auto node : lp[nodes])
				cout<<node<<", ";

			cout<<"]" << endl;
		}
	}


	void bfs(T source){


		queue<T> q;
		q.push(source);
		unordered_set<T> visited;
		visited.insert(source);

		while(q.size()){

			auto curr = q.front(); q.pop();

			cout<<curr << " -> ";

			for (auto neighbour : lp[curr])
				if(!visited.count(neighbour)) 
					q.push(neighbour),visited.insert(neighbour);
		}

	}


	//single source shortest path algorithm
	void shortestPath(T source, T dest=-1){

		queue<T> q;
		q.push(source);
		unordered_set<T> visited;
		visited.insert(source);

		vector<int> dist(vertices);
		vector<int> parent(vertices);

		while(q.size()){

			auto curr = q.front(); q.pop();

			for (auto neighbour : lp[curr])
				if(!visited.count(neighbour)) {

					q.push(neighbour);
					parent[neighbour] = curr;
					visited.insert(neighbour);
					dist[neighbour] = dist[curr] + 1;
				}
		}

		int c=0;
		cout<<"SOURCE: "<<source<<endl;
		for(auto path : dist)
			cout<<"shortestPath for "+to_string(c++)+" -> "+to_string(path)<<endl;
		


		if(dest != -1){

			int temp = dest;
			cout<<"PATH: ";
			while(temp != source){
				cout << temp << " <- ";
				temp = parent[temp];
			}

			cout<<source<<endl;
		}
	}
};


int main(){
    io();
    cout << " Solution: " << endl;
    Graph<int> g(7);

   	g.addEdge(0,1);
   	g.addEdge(1,2);
   	g.addEdge(2,3);
   	g.addEdge(3,5);
   	g.addEdge(5,6);
   	g.addEdge(4,5);
   	g.addEdge(0,4);
   	g.addEdge(3,4);

   	g.print();

   	cout<<"BFS: ";g.bfs(1);cout<<endl;

   	g.shortestPath(1);
   	g.shortestPath(2,4);


    return 0;
}

