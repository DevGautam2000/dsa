#include "io/io.h"

template <class T>

class Rectangle
{

    T l;
    T b;

public:
    Rectangle(T l, T b)
    {
        this->l = l;
        this->b = b;
    }

    T area()
    {
        return this->b * this->l;
    }

    T perimeter()
    {
        return 2 * (this->b + this->l);
    }
};
int main()
{
    io();
    int l, b;
    float lf, bf;
    cin >> l >> b >> lf >> bf;
    Rectangle<int> r(l, l);
    Rectangle<float> rf(lf, bf);
    cout << "area: " << r.area() << endl;
    cout << "perimeter: " << r.perimeter() << endl;
    cout << "area<float>: " << rf.area() << endl;
    cout << "perimeter<float>: " << rf.perimeter() << endl;
    return 0;
}
