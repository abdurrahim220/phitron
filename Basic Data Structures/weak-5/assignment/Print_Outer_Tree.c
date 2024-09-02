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
}

void collectLeftmostPath(Node *root, vector<int> &path)
{
    if (root == NULL)
    {
        return;
    }

    stack<int> pathStack;
    Node *current = root;

    while (current != NULL)
    {
        pathStack.push(current->val);
        if (current->left == NULL && current->right == NULL)
        {
            break;
        }
        if (current->left != NULL)
        {
            current = current->left;
        }
        else
        {
            current = current->right;
        }
    }

    while (!pathStack.empty())
    {
        path.push_back(pathStack.top());
        pathStack.pop();
    }
}

void collectRightmostPath(Node *root, vector<int> &path)
{
    if (root == NULL)
    {
        return;
    }

    Node *current = root;
    
    while (current != NULL)
    {
        if (find(path.begin(), path.end(), current->val) == path.end())
        {
            path.push_back(current->val);
        }
        if (current->left == NULL && current->right == NULL)
        {
            break;
        }
        if (current->right != NULL)
        {
            current = current->right;
        }
        else
        {
            current = current->left;
        }
    }
}

int main()
{
    Node *root = input_tree();
    vector<int> path;

    if (root && root->left)
    {
        collectLeftmostPath(root, path);
    }

    if (root && (root->left || root->right))
    {
        collectRightmostPath(root, path);
    }

    for (int val : path)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
