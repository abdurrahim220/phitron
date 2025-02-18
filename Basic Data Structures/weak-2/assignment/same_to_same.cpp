#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_list(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

bool are_lists_equal(Node* head1, Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->val != temp2->val) {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    // Check if both lists have reached the end
    return temp1 == NULL && temp2 == NULL;
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;

    
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_list(head1, tail1, val);
    }

    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_list(head2, tail2, val);
    }

   
    if (are_lists_equal(head1, head2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    
    Node* current;
    while (head1 != NULL) {
        current = head1;
        head1 = head1->next;
        delete current;
    }
    while (head2 != NULL) {
        current = head2;
        head2 = head2->next;
        delete current;
    }

    return 0;
}
