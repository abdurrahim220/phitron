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

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_node(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
        return;

    if (pos == 0)
    {
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete temp;
        return;
    }

    Node *temp = head;
    for (int i = 0; temp != NULL && i < pos - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
        return;

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;

    if (temp->next == NULL)
    {
        tail = temp;
    }

    delete deleteNode;
}

int main()
{
    int t;
    cin >> t;

    Node *head = NULL;
    Node *tail = NULL;

    while (t--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            insert_head(head, tail, val);
        }
        else if (pos == 1)
        {
            insert_tail(head, tail, val);
        }
        else if (pos == 2)
        {
            delete_node(head, tail, val);
        }
        print_list(head);
    }

    return 0;
}
