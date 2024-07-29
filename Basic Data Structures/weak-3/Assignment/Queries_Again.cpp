#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int size(Node *head) {
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_list(Node *head, Node *tail) {
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    temp = tail;
    cout << "R -> ";
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_position(Node *&head, Node *&tail, int pos, int val) {
    Node *newNode = new Node(val);
    if (pos == 0) {
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    } else {
        Node *tmp = head;
        for (int i = 0; i < pos - 1 && tmp != NULL; i++) {
            tmp = tmp->next;
        }
        if (tmp == NULL || (tmp->next == NULL && pos != size(head))) {
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }
        newNode->next = tmp->next;
        if (tmp->next != NULL) {
            tmp->next->prev = newNode;
        } else {
            tail = newNode;
        }
        tmp->next = newNode;
        newNode->prev = tmp;
    }
    print_list(head, tail);
}

int main() {
    int Q;
    cin >> Q;
    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < Q; i++) {
        int pos, val;
        cin >> pos >> val;
        if (pos > size(head)) {
            cout << "Invalid" << endl;
        } else {
            insert_at_position(head, tail, pos, val);
        }
    }

    return 0;
}
