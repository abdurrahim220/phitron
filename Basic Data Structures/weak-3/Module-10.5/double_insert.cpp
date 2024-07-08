#include <bits/stdc++.h>
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

void normal_Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_position(Node *head, int pos, int val)
{

    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->val;
    // newNode->next = tmp->next;
    // tmp->next = newNode;
    // newNode->next->prev = newNode;
    // newNode->prev = tmp;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int pos, val;

    cin >> pos >> val;
    if (pos == 0)
    {
        insert_head(head, tail, val);
    }
    else
    {
        insert_at_position(head, pos, val);
    }

    normal_Print(head);
    print_reverse(tail);

    return 0;
}