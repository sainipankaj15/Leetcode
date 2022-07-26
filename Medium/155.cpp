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
