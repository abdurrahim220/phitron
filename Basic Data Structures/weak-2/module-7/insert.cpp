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
}

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

void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    } // temp akhn pos gor a ache
    // cout << tmp->val << endl;
    newNode->next = tmp->next;
    tmp->next = newNode;
};

void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
};

void insert_tail(Node *head,  Node *&tail,int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    Node *head = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_list(head);
    // insert(head, 3, 60);
    // print_list(head);

    int Size = size(head);
    cout << "Size of the list is: " << Size << endl;
    int pos, val;
    cin >> pos >> val;
    if (pos > Size)
    {
        cout << "Invalid position" << endl;
    }
    else if (pos == 0)
    {
        insert_head(head, val);
    }
    else
    {
        insert(head, pos, val);
    }

    print_list(head);
    return 0;
}