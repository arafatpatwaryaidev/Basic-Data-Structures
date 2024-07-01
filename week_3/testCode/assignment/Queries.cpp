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

//head section
void insert_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
       
    }else {
     newNode->next = head;
    head = newNode;
}

}

//tail section
void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
       
    }else {
    tail->next = newNode;
    tail = newNode;
}

}

//delete function
void delete_value_index(Node*& head, Node*& tail, int index)
{
    if(head == NULL) return;

    if(index == 0)
    {
        Node* temp  = head;
        head = head->next;
        delete temp;
        if(head == NULL)
        {
            tail = NULL;
        }
        return;
    }

    Node* temp = head;
    for (int  i = 0; temp != NULL && i < index - 1; i++)
    {
    temp = temp->next;
    }

    if(temp  == NULL || temp->next ==  NULL) return;

    Node* nodeDetele = temp->next;
    temp->next = temp->next->next;
    if(temp->next == NULL)
    {
        tail = temp;
    }
     delete nodeDetele;
}

void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;
    Node* head = NULL;
    Node* tail = NULL;
    
    // while (true) {
    //     cin >> val;
    //     if (val == -1)
    //         break;
    //     insert_tail(head, tail, val);
    // }

    for (int i = 0; i < Q; i++)
    {
       int X, V;
       cin >> X >>V;

       if(X == 0)
       {
        insert_head(head, tail, V);
       }else if (X == 1) {
        insert_tail(head,tail, V);
       } else if (X == 2){
         delete_value_index(head, tail, V);
       }

        print_linked_list(head);
    }
    
   
    return 0;
}
