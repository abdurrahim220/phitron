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
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop()
    {
        if (tail == NULL)
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
    }

    int top()
    {
        if (tail == NULL)
            return -1;
        return tail->val;
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

class myQueue
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
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }

    void pop()
    {
        if (head == NULL)
            return;
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        delete deleteNode;
    }

    int front()
    {

        return head->val;
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

bool areStacksEqual(myStack &s, myQueue &q)
{
    if (s.size() != q.size())
    {
        return false;
    }

    while (!s.empty() && !q.empty())
    {
        int stackTop = s.top();
        int queueFront = q.front();

        if (stackTop != queueFront)
        {
            return false;
        }

        s.pop();
        q.pop();
    }

    return s.empty() && q.empty();
}

// int main()
// {
//     int a, b;
//     myStack s;
//     // myQueue q;

//     cin >> a;
//     while (a--)
//     {
//         int x;
//         cin >> x;
//         s.push(x);
//     }

//     // cin >> b;
//     // while (b--)
//     // {
//     //     int x;
//     //     cin >> x;
//     //     q.push(x);
//     // }

//     // if (areStacksEqual(s, q)) {
//     //     cout << "YES" << endl;
//     // } else {
//     //     cout << "NO" << endl;
//     // }
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
//     // while (!q.empty())
//     // {
//     //     cout << q.front() << " ";
//     //     q.pop();
//     // }

//     return 0;
// }

int main()
{
    int a, b;
    myStack s;
    myQueue q;

    cin >> a >> b;
    while (a--)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    while (b--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout << endl;
    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    // cout << endl;
    if (areStacksEqual(s, q))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}