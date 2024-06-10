#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,2,6,2,8,2};
    //replace
    // replace(v.begin(),v.end()-1,2,222);
    // for (int x:v)
    // {
    //    cout<<x<<" ";
    // }
    //find
    //vector<int>:: iterator it;
    // it= find(v.begin(),v.end(),2);
    // cout<<*it;
        auto it= find(v.begin(),v.end(),8);
        if(it == v.end()) cout<<"Not Found";
        else cout<<"Found";

   return 0;
}