
#include "io/io.h"

class MyQueue
{
    vector<int> st;
    int top = -1;
    int front = -1;

public:
    MyQueue()
    {
        top = 0;
        front = 0;
    }

    void push(int x)
    {
        st.push_back(x);
        top++;
    }

    int pop()
    {
        return st[front++];
    }

    int peek()
    {
        return st[front];
    }

    bool empty()
    {
        return front == top;
    }
};

int main()
{
    io();

    MyQueue *obj = new MyQueue();
    obj->push(1);

    int param_2 = obj->pop();
    bool param_4 = obj->empty();

    cout << param_2 << endl;
    cout << param_4 << endl;

    return 0;
}
