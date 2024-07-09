#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    // operation of function
    void push(int val) // O(1)
    {
        v.push_back(val);
    }

    void pop() // O(1)
    {
        // value delete or remove
        v.pop_back();
    }
    int top() // O(1)
    {
        // value access
        return v.back();
    }
    int size() // O(1)
    {
        return v.size();
    }
    bool empty() // O(1)
    {
        if (v.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    myStack st;
    //if value less use this method
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);

    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    // st.push(111);
    // st.pop();
   
    //     if(st.empty()  == false)
    // {
    //     cout<<st.top()<<endl;
    // }
    // cout << st.top() << endl;

    int  n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while (!st.empty()) // st.empty() == false
    {
      cout<<st.top()<<endl;
      st.pop();
    }
    
    

    return 0;
}