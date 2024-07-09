#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(100);

    cout<<st.top()  <<endl;
    st.pop();
    cout<<st.top() <<endl;
    st.pop();
        cout<<st.top() <<endl;


    return 0;
}