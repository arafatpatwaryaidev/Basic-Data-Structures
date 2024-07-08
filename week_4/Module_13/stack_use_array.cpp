#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        vector<int> v;
        //operation of function
        void push(int val)  // O(1)
        {
            v.push_back(val);

        }


        void pop()   // O(1)
        {
            //value delete or remove
            v.pop_back();
        }
        int top()   // O(1)
        {
            //value access
            return v.back();
        }
        int size()   // O(1)
        {
            return v.size();
        }
        bool empty()   // O(1)
        {
            if(v.size() == 0){
                return true;
            } else{
                return false;
            }
        }
};

int main(){
    
 myStack st;
    return 0;
}