#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        int l, d;
        cin >> l >> d;
        Node *left;
        Node *right;
        if (l == -1)
            left = NULL;
        else
        {
            left = new Node(l);
        }
        if (d == -1)
            right = NULL;
        else
        {
            right = new Node(d);
        }
        node->left = left;
        node->right = right;

        if (node->left)
        {
            q.push(node->left);
        }
        if (node->right)
        {
            q.push(node->right);
        }
    }
    return root;
};

bool search(Node *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->val == x)
    {
        return true;
    }
    if (x < root->val)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}

int main()
{
    Node *root = input_tree();

    if (search(root, 6))
    {
        cout << "Yes it is present in the tree" << endl;
    }
    else
    {
        cout << "No it is not present in the tree" << endl;
    }

    return 0;
}