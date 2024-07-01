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


//remove Duplicate
// void remove_duplicate(Node* head){
//     if(!head) return;
//     disorder_val<int>
// }

void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

//for delete value
void delete_val(Node* head, int x) {
if(head->val == x)
{
    head = head->next;
    return;
}

    Node* temp = head;

    while (temp->next != NULL) {
        //main logic
       if(temp->next->val == x)
       {

        Node* delete_val = temp->next;
        temp->next = temp->next->next;
        delete deletenode;
        break;

       }

        temp = temp->next;
    }
    cout << endl;
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
    
    int x;
    cin>>x;

    delete_val(head,x);

    print_linked_list(head);
    return 0;
}
