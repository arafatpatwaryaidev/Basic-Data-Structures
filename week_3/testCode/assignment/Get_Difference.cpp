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

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int min_max(Node* head) {
   int mn = INT_MAX;
   int mx = INT_MIN;

    Node* temp = head;
    while (temp != NULL) {
        // cout << temp->val << " ";
        if(temp->val < mn)
        {
            mn = temp->val;
        }

         if(temp->val > mx)
        {
            mx = temp->val;
        }
        temp = temp->next;
    }
    // cout<< mn << " " <<mx  << endl;
    return mx - mn;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    int differ = min_max(head);
    cout<< differ <<endl;
    // min_max(head);
    return 0;
}
