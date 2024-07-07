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
          //Node* tail;

    singlyList()
    {
        head = NULL;
       // tail = NULL;
    }

    //add new Node
    void addNode(int val)
    {
        Node* newNode = new Node(val);

        //check
        if(head == NULL)
        {
            head = newNode;
            //tail = newNode;
        }else {
           Node* tmp = head;
           while(tmp->next != NULL)
           {
            tmp = tmp->next;
           }
           tmp->next = newNode;
        }

    }

    //remove double
    void remove_duplicate()
    {
         //Use condition
       if(head == NULL) return; 

       Node* cur = head;
       while (cur != NULL)
       {
        Node* run =cur;
          while(run->next != NULL)
          {
            if(run->next->val == cur->val)
            {
                Node* duplicate = run->next;
                run->next = run->next->next;
                delete duplicate;
            }else{
                run = run->next;
            }
          }
          cur = cur->next;
       }
       
       }


    //show vector
    void sort_list()
    {
        if(head == NULL) return;

        std::vector<int> data;
        Node* cur = head;

        while(cur != NULL)
        {
            data.push_back(cur->val);
            cur = cur->next;
        }

        std::sort(data.begin(), data.end());

        cur = head;
        for (int val : data)
        {
            cur->val = val;
            cur = cur->next;
        }
        
    }


    void show()
    {
        Node* cur = head;
       
        while(cur != NULL)
        {
          std::cout << cur->val <<" ";
          cur = cur->next;
        }

        std::cout <<std::endl;
    }
};


int main(){

    singlyList list;
   int val;

  while(std::cin>> val && val != -1)
  {
    list.addNode(val);
  }

  list.remove_duplicate();
  list.sort_list();
  list.show();

    return 0;
}