#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1) {
        root = NULL;
    } else {
        root = new Node(val);
    }
    queue<Node*> q;
    if (root) {
        q.push(root);
    }
    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        int l, d;
        cin >> l >> d;
        Node* left;
        Node* right;
        if (l == -1)
            left = NULL;
        else {
            left = new Node(l);
        }
        if (d == -1)
            right = NULL;
        else {
            right = new Node(d);
        }
        node->left = left;
        node->right = right;

        if (node->left) {
            q.push(node->left);
        }
        if (node->right) {
            q.push(node->right);
        }
    }
    return root;
};

void findLeafNodes(Node* root, vector<int>& leaves) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        leaves.push_back(root->val);
    }
    findLeafNodes(root->left, leaves);
    findLeafNodes(root->right, leaves);
}

int main() {
    Node* root = input_tree();
    vector<int> leaves;
    findLeafNodes(root, leaves);

    
    sort(leaves.rbegin(), leaves.rend());

    for (int val : leaves) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
