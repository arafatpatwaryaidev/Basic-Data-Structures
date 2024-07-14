#include<bits/stdc++.h>
using namespace std;

class MyStack {
    public:
    list<char> l;

         MyStack() {

         }

         void push(char x) {
            l.push_back(x);

         }

         char pop() {
            if(l.empty())
            return -1;
            char topValue =l.back();
            l.pop_back();
            return topValue;

         }

         char top() {
            if(l.empty())
            return -1;
            return l.back();

         }
         
         bool empty() {
            return l.empty();

         }
};

bool is_valied(string s){
    MyStack l;
    for (char c:s)
    {
       if(!l.empty()  && ((c =='1' && l.top() =='0')
       || (c=='0' && l.top() =='1'))){
        l.pop();
       }else{
        l.push(c);
       }
    }
    return l.empty();

}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(is_valied(s)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}