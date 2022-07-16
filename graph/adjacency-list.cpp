#include "io/io.h"

namespace  al {

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
};

}

namespace complexal{

	class City{

		string name;
		

	public:
		vector<string> neighbours;
		City(string n){ name = n;}

		string getname(){
			return name;
		}
		string toString(){
		return ("{ name= " + name + " }");
  		}
	};


	class Graph{
		unordered_map<string,City*> map;

	public:

		Graph(vector<string> cities){

			for(auto city: cities)
				map[city] = new City(city);
		}



		void addEdge(string c1, string c2, bool undirected=false){

			map[c1]->neighbours.push_back(c2);
			if(undirected)
				map[c2]->neighbours.push_back(c1);

		}


		void print(){
			console::display(map,[](auto city){
			for(auto neighbour: city->neighbours)
				cout<<neighbour<<", ";
			});

		}

	};
}



int main(){
    io();
    cout << " Solution: " << endl;

    al::Graph<int> g(6);

   	g.addEdge(0,1);
   	g.addEdge(0,4);
   	g.addEdge(2,1);
   	g.addEdge(3,4);
   	g.addEdge(4,5);
   	g.addEdge(2,3);
   	g.addEdge(3,5);

   	g.print();


   	vector<string> cities = {"Delhi","Mumbai","Kolkata","Maharashtra"};
   	complexal::Graph gr(cities);


   	gr.addEdge("Delhi","Mumbai");
   	gr.addEdge("Maharashtra","Mumbai");
   	gr.addEdge("Kolkata","Delhi");
   	gr.addEdge("Maharashtra","Kolkata");

   	gr.print();

   	 using namespace complexal;

   	vector<City> v = {
   		City("Delhi"),
   		City("Mumbai"),
   		City("Sikkim"),
   		City("Delhi"),
   	};

   	console::display(v,[](auto city){
   		cout<<city.getname()<<", ";
   	});

    return 0;
}

