#include "io/io.h"

class ParkingSystem {
    vector<int> c;
public:
    ParkingSystem(int big, int medium, int small) {
       c={big,medium,small};
    }
    
    bool addCar(int carType) {
        return --c[carType-1] >= 0;
    }
};

int main(){
    io();
    cout << " Solution: " << endl;
    ParkingSystem* obj = new ParkingSystem(1, 1, 0);
 	cout<<obj->addCar(1)<<endl;
 	cout<<obj->addCar(2)<<endl;
 	cout<<obj->addCar(3)<<endl;
 	cout<<obj->addCar(1)<<endl;

    return 0;
}

