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
    } else{
        tail->next = newNode;
        tail = newNode;
    }
    // tail->next = newNode;
    // tail = newNode;
}

void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void remove_duplicate(Node* head)
{
    Node* present = head;
    while(present != NULL)
    {
        Node*  start = present;
        while (start->next !=NULL)
        {
            if(start->next->val  == present->val)
            {
                Node* temp = start->next;
                start->next = start->next->next;
                delete temp;
            } else {
                start = start->next;
            }
        }

        present = present->next;
        
    }
}

void delete_first_val(Node*& head, int x)
{
    Node* temp = head;
    Node* prv = NULL;


    if(temp != NULL && temp->val == x)
    {
        head = temp->next;
        delete temp;
        return;
    }

    while (temp != NULL && temp->val !=x)
    {
        prv = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        return;
    }
    

    prv->next = temp->next;
    delete temp;

}


int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;


    while (true) 
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    remove_duplicate(head);

    print_linked_list(head);
    return 0;
}
