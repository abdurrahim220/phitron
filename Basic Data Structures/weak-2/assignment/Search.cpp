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

void insert_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

int find_index(Node *head, int x)
{
    int idx = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            return idx;
        }
        tmp = tmp->next;
        idx++;
    }
    return -1;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;

        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_list(head, tail, val);
        }

        int x;
        cin >> x;
        cout << find_index(head, x) << endl;

        Node *tmp = head;
        while (tmp != NULL)
        {
            Node *nextNode = tmp->next;
            delete tmp;
            tmp = nextNode;
        }
    }

    return 0;
}
