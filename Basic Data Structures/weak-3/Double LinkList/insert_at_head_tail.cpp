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

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
};

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
};

void insert_at_any_position(Node *head, int pos, int val)
{

    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
};

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
};

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
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
};

void delete_at_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
};

void delete_tail(Node *&tail)
{
    Node *deleNode = tail;
    tail = tail->prev;
    delete deleNode;
    tail->next = NULL;
};
void delete_head(Node *&head)
{
    Node *deleNode = head;
    head = head->next;
    delete deleNode;
    head->prev = NULL;
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    print_normal(head);

    int pos, val;
    cout << "Enter the position and value to insert: ";
    cin >> pos >> val;
    if (pos == 0)
    {
        insert_head(head, tail, val);
    }
    else if (pos == size(head))
    {
        insert_tail(head, tail, val);
    }
    else if (pos >= size(head))
    {
        cout << "Invalid position";
    }
    else
    {
        insert_at_any_position(head, pos, val);
    }
    delete_tail(tail);
    delete_head(head);
    cout << "Normal Print" << endl;
    print_normal(head);
    cout << "Reverse Print" << endl;
    print_reverse(tail);

    return 0;
}