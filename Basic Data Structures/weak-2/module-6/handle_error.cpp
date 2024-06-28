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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    Node *tmp = head;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (tmp->next != NULL)
    {
        tmp = tmp->next;

    } // tmp ekon last node e

    tmp->next = newNode;
    cout << "Inserted at tail:" << endl;
};

void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
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
        if (tmp == NULL)
        {
            cout << "Invalid Index" << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Inserted at position: " << pos << endl;
};

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << "Inserted at head" << endl;
};

void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid Index" << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << "Invalid Index" << endl;
        return;
    }
    Node *delNode = tmp->next;
    tmp->next = tmp->next->next;

    delete delNode;
    cout << "Deleted at position: " << pos << endl;
};

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "Head is not available" << endl;
        return;
    }
    Node *tmp = head;
    head = head->next;
    delete tmp;
    cout << "Deleted at head" << endl;
}

int main()
{

    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;         // done
        cout << "Option 2: Print Linked List" << endl;      // done
        cout << "Option 3: Insert at any position" << endl; // done
        cout << "Option 4: Insert at head" << endl;         // done

        cout << "Option 5: Delete from position" << endl;
        cout << "Option 6: Delete head" << endl;
        cout << "Option 7: Terminate" << endl;

        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Insert your value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, val;
            cout << "Insert your position: ";
            cin >> pos;
            cout << "Enter value : ";
            cin >> val;
            if (pos == 0)
            {
                // cout<<"You can't inserted at head";
                insert_at_head(head, val);
            }
            else
            {
                insert_at_position(head, pos, val);
            }
        }

        else if (op == 4)
        {
            int val;
            cout << "Enter value: ";
            cin >> val;
            insert_at_head(head, val);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }

        else if (op == 6)
        {
            delete_head(head);
        }

        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}