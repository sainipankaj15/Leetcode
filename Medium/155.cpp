class MinStack
{
public:
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *head = NULL;
    priority_queue<int, vector<int>, greater<int>> p;
    MinStack()
    {
    }

    void push(int val)
    {
        struct node *t = (struct node *)malloc(sizeof(struct node));
        t->data = val;
        t->next = NULL;
        t->next = this->head;
        head = t;
        if (p.size() == 0 || val <= p.top())
            p.push(val);
    }

    void pop()
    {

        if (head != NULL)
        {
            if (head->data == p.top())
                p.pop();
            head = head->next;
        }
    }

    int top()
    {
        if (head != NULL)
        {
            return head->data;
        }
        return -1;
    }

    int getMin()
    {
        return p.top();
    }
};


// In above method I used linkedlist and priorty_queue
// so linkedlist is okay here pop and push are O(1) but prioruty queue takes log(n) for insertion so in worst case it will take O(N.logN)
// so below method using 2 stacks

class MinStack
{
public:
    stack<int> s1;
    stack<int> p;
    MinStack()
    {
    }

    void push(int val)
    {

        s1.push(val);
        if (p.size() == 0 || val <= p.top())
            p.push(val);
    }

    void pop()
    {

        if (s1.top() == p.top())
            p.pop();
        s1.pop();
    }

    int top()
    {

        return s1.top();
    }

    int getMin()
    {
        return p.top();
    }
};
