#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    };

    void pop()
    {
        if (sz == 0)
            return;
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    };

    int top()
    {
        if (tail != NULL)
            return tail->val;
        return -1; // Return -1 if stack is empty (or you can handle it differently)
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0;
    }
};

bool areStacksEqual(myStack &s1, myStack &s2)
{
    if (s1.size() != s2.size())
        return false;

    while (!s1.empty() && !s2.empty())
    {
        if (s1.top() != s2.top())
            return false;
        s1.pop();
        s2.pop();
    }

    return s1.empty() && s2.empty();
}

int main()
{
    myStack s1;
    myStack s2;
    int n1, n2, x;

    // Input first stack
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        cin >> x;
        s1.push(x);
    }

    // Input second stack
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        cin >> x;
        s2.push(x);
    }

    // Check if stacks are equal
    if (areStacksEqual(s1, s2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
