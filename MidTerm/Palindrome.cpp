#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class Node {
    public:

        int val;
        Node* next;
        Node* prev;

        Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Doubly_list 
{
     public:
          Node* head;
          Node* tail;

           Doubly_list(){
              this->head = NULL;
              this->tail = NULL;
    }
 //Add new node
    void addNode(int val){
        Node* newNode = new Node(val);

        //condition check
        if(tail != NULL){
            tail->next = newNode;
            newNode->prev = tail;
        }else {
            head = newNode;
        }
        tail = newNode;
    }

    //true or
    bool is_Palindrome(){
          Node* left = head;
          Node* right = tail;

          while(left !=NULL && right != NULL
          && left != right && left->prev != right){
            if(left->val != right->val){
                return false; //0
            }

            left = left->next;
            right = right->prev;
          }

          return true; //1
    }
    };


int main(){
    int input;
    Doubly_list list;
    cout<<endl;

    // Doubly_list dtt;
    // int tmp = inp;

    while(true){
        cin>> input;
        if(input == -1)
        break;

        list.addNode(input);
    }

    if(list.is_Palindrome()){
        cout<<"YES"<<endl;
    }else{
        cout <<"NO"<<endl;
    }

    return 0;
}