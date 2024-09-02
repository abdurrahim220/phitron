#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* input_tree() {
    int val;
    cin >> val;
    if (val == -1) return NULL;

    Node *root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node *node = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            node->left = new Node(l);
            q.push(node->left);
        }

        if (r != -1) {
            node->right = new Node(r);
            q.push(node->right);
        }
    }
    return root;
}

void print_nodes_at_level(Node *root, int x) {
    if (root == NULL) {
        cout << "Invalid" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);
    int level = 0;

    while (!q.empty()) {
        int count = q.size(); 
        if (level == x) {
            while (count--) {
                Node *node = q.front();
                q.pop();
                cout << node->val << " ";
            }
            cout << endl;
            return;
        }

        
        while (count--) {
            Node *node = q.front();
            q.pop();

            if (node->left != NULL) q.push(node->left);
            if (node->right != NULL) q.push(node->right);
        }

        level++;
    }

   
    cout << "Invalid" << endl;
}

int main() {
    Node *root = input_tree();
    int x;
    cin >> x;
    print_nodes_at_level(root, x);

    return 0;
}
