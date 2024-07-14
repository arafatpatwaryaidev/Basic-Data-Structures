#include<bits/stdc++.h>
using namespace std;

class MyStack {
    public:
        list<int> l;

         void push(int val) {
            l.push_back(val);

         }

         void pop() {
            l.pop_back();

         }

         int top() {
            return l.back();
            
      }
         
        
        int size(){
            return l.size();
        }

         bool empty() {
            // if(l.size() == 0)
            // return true;
            // else 
            // return false;
            return l.empty();

         }
};
//queue

class myQueue{
    public:
    list<int> l;

    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_front();
    }
    int front(){
        return l.front();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
};

int main(){
    MyStack st;
    myQueue qt;

    int n, m;
    cin>>n>>m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        qt.push(x);
    }
    
    //check
    if(st.size() !=qt.size()){
        cout<<"NO"<<endl;
        return 0;
    }

    bool equal = true;
    while (!st.empty() && !qt.empty())
    {
       if(st.top() !=qt.front()){
        equal = false;
        break;
       }

       st.pop();
       qt.pop();
    }

    if(equal){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    

    return 0;
}