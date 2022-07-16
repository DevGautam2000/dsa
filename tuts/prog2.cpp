#include "io/io.h"


// void print(string s){
// 	cout<<"The product is: "<<s<<endl;
// }

// class Apple{

// public:
// 	Apple(){}
// 	Apple(string product){
// 		print("Apple "+product);
// 	}
// };

// class Zapple : protected Apple{


// public:
// 	string x;
// 	Zapple(): Apple(){};
// 	Zapple(string product) : Apple(product){
// 		x=product;
// 		print("Zenfone "+product);
// 	};



// 	Zapple(const Zapple &z1){
// 		this->x = z1.x;
// 	}
// };

// int main(){
//     io();
   
//     Zapple zenfone("Zenfone");
//     Zapple z2=zenfone;el;
//     cout<<z2.x;



//     return 0;
// }

class BixBase
{   
    public:
    BixBase()
    {
        cout<< "Base OK. "; 
    }
    ~BixBase()
    {
        cout<< "Base DEL. "; 
    }
};
class BixDerived: public BixBase
{
    public:
    BixDerived()
    { 
        cout<< "Derived OK. "; 
    }
    ~BixDerived()
    { 
        cout<< "Derived DEL. "; 
    }
};
int main()
{
	io();
	string name="";
	cin>>name;
	cout<<name;el;
    // BixBase *basePtr = new BixDerived();
    // delete basePtr;

    BixDerived b = BixDerived();

    return 0;
}
	