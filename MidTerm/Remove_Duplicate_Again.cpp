#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};

//create singly linked (define head and tail)
class singlyList 
{
    public:
          Node* head;
          Node* tail;

    singlyList()
    {
        head = NULL;
        tail = NULL;
    }

    //add new Node
    void addNode(int val)
    {
        Node* newNode = new Node(val);

        //check
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }else {
            tail->next = newNode;
            tail = newNode;
        }

    }

    //remove double
    void remove_deplicate()
    {
        Node* cur = head;
        Node* index = NULL;
        Node * tmp = NULL;

        //Use condition

        if(head == NULL)
        {
            return;
        }else {
            while(cur != NULL){
                tmp = cur;
                index = cur->next;


                while(index != NULL)
                {
                    if(cur->val == index->val)
                    {
                        tmp->next = index->next;
                    }else {
                        tmp = index;
                    }
                    index = index->next;
                }
                cur = cur->next;
            }
        }
    }


    //show

    void show()
    {
        Node* cur = head;
        if(head == NULL)
        {
            cout <<"List empty"<<endl;
            return;
        }
        while(cur != NULL)
        {
            cout<< cur->val <<" ";
            cur = cur->next;
        }
        cout <<endl;
    }
};


int main(){

    singlyList list;
    list.addNode(val);

    list.show();
    list.remove_deplicate();
    list.show();

    return 0;
}