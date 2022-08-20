// simple double ended queue ka use karo 

class MyStack
{
public:
    deque<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        q.push_back(x);
    }

    int pop()
    {
        if (q.size())
        {
            int x = q.back();
            q.pop_back();
            return x;
        }
        return -1;
    }

    int top()
    {
        return q.back();
    }

    bool empty()
    {
        if (q.size())
            return 0;
        return 1;
    }
};
