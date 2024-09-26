#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz;

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
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
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
        return sz == 0 ? true : false;
    };
};

void mergeQueues(myQueue &q1, myQueue &q2, myQueue &mergedQueue) {
    while (!q1.empty()) {
        mergedQueue.push(q1.front());
        q1.pop();
    }
    while (!q2.empty()) {
        mergedQueue.push(q2.front());
        q2.pop();
    }
}

int main()
{
    myQueue q1;
    myQueue q2;
    myQueue mergedQueue;
    int n1;
    cin >> n1;
    while (n1--)
    {
        int x;
        cin >> x;
        q1.push(x);
    }
    int n2;
    cin >> n2;
    while (n2--)
    {
        int x;
        cin >> x;
        q2.push(x);
    }

    // cout << "First Queue:" << endl;
    // while (!q1.empty())
    // {
    //     cout << q1.front() << endl;
    //     q1.pop();
    // }
    // cout << "Second Queue:" << endl;
    // while (!q2.empty())
    // {
    //     cout << q2.front() << endl;
    //     q2.pop();
    // }

    mergeQueues(q1, q2, mergedQueue);

    while (!mergedQueue.empty()) {
        cout << mergedQueue.front() << " ";
        mergedQueue.pop();
    }
    cout << endl;

    return 0;
}