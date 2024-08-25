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

Node *input_tee()
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
}

void level_ode(Node *root)
{
    if (root == NULL)
    {
        cout << "Tee nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
};

int count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
};

int count_leaf(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        return count_leaf(root->left) + count_leaf(root->right);
    }
}

int maxHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = maxHeight(root->left);
    int d = maxHeight(root->right);
    return max(l, d) + 1;
}

int main()
{
    Node *root = input_tee();
    level_ode(root);
    cout << endl;
    cout << "Count of nodes is " << count(root) << endl;
    cout << "Count of leaf nodes is " << count_leaf(root) << endl;
    cout << "Height of the tree is " << maxHeight(root) << endl;

    return 0;
}