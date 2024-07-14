#include<bits/stdc++.h>
using namespace std;

class Node 
{
      public:
           int val;
           Node* next;

           Node(int val)
           {
            this->val=val;
            this->next=NULL;
           }
};
//Queue
class myQueue{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz=0;

    void push(int val){
        sz++;
        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail =newNode;
            return;

        }
        tail->next = newNode;
        tail = tail->next;
    }

    void pop(){
        if(head == NULL) return;
        sz--;

        Node* deleteNode = head;
        head=head->next;
        delete deleteNode;
        if(head == NULL){
            tail= NULL;
        }
    }
    int front(){
        if(head == NULL) return -1;
        return head->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        //        return sz == 0;

        if(sz == 0) return true;
        // else false;
    }
};
//Stack
class myStack {
    public:
    Node* head = NULL;
    int sz = 0;

    void push(int val){
        sz++;
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    void pop(){
        if(head == NULL) return;
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    int top(){
        if(head == NULL) return -1;
        return head->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        return sz == 0;
    }
};
int main(){

    int n,m;
    cin>>n>>m;

    myStack s;
    myQueue q;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        s.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    
    bool equal = true;
    
   
while(!s.empty() && !q.empty()) {
    if(s.top() !=q.front()){
        equal = false;
        break;
    }
    s.pop();
    q.pop();
}

if(s.size() !=q.size()) equal = false;

if(equal){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
return 0;
}