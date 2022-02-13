#include "io/io.h"

class MyHashMap
{
    vector<pair<int, int>> p;

public:
    MyHashMap()
    {
    }

    void put(int key, int value)
    {
        for (auto &pr : this->p)
            if (pr.first == key)
            {
                pr.second = value;
                return;
            }

        this->p.emplace_back(key, value);
    }

                    int get(int key){
                        for (auto pr : this->p)
                            if (pr.first == key)
                                return pr.second;

                        return -1;
                    }

    void remove(int key)
    {
        for (int i = 0; i < this->p.size(); i++)
            if (this->p[i].first == key)
                this->p.erase(this->p.begin() + i);
    }
};

int main()
{
    io();
    cout << " Solution: " << endl;
    MyHashMap *obj = new MyHashMap();
    obj->put(1, 1);
    obj->put(2, 2);
    cout << obj->get(1) << endl;





    
    cout << obj->get(3) << endl;
    obj->put(2, 1);
    cout << obj->get(2) << endl;
    obj->remove(2);
    cout << obj->get(2) << endl;

    return 0;
}
