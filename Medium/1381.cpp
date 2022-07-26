class CustomStack
{
public:
    int a[1000];
    int count = 0; // count is not top
    int size = 0;

    CustomStack(int maxSize)
    {
        size = maxSize;
    }

    void push(int x)
    {
        if (count < size)
        {
            a[count] = x;
            count++;
        }
    }

    int pop()
    {
        if (count > 0 && count < 1001)
        {
            count--;
            return a[count];
        }

        // if stack is empty then return -1;
        return -1;
    }

    void increment(int k, int val)
    {

        for (int i = 0; i < min(k, count); i++)
        {
            a[i] = a[i] + val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */