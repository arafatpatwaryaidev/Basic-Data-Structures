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
void same_vec_fun(Node* head, vector<int>& v){
    Node* temp = head;
    while (temp != NULL)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }
    
}
void is_same_pil(Node* head1, Node* head2) {
    vector<int> v1, v2;
    same_vec_fun(head1, v1);
    same_vec_fun(head2,v2);

if(v1 == v2)
{
    cout<<"YES" <<endl;
}else{
    cout<<"NO" <<endl;
}
    }


int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head1, tail1, val);
    }

        while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head2, tail2, val);
    }

    is_same_pil(head1,head2);

    return 0;
}
