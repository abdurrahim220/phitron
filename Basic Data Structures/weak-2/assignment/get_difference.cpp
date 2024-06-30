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
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int find_max_min_difference(Node *head)
{
    if (head == NULL)
        return 0;

    int maxVal = INT_MIN;
    int minVal = INT_MAX;
    Node *temp = head;

    while (temp != NULL)
    {
        maxVal = max(maxVal, temp->val);
        minVal = min(minVal, temp->val);
        temp = temp->next;
    }

    return maxVal - minVal;
}

int main()
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

    int result = find_max_min_difference(head);
    cout << result << endl;

    return 0;
}
