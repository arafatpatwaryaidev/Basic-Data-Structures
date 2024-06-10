#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
        vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    

    for (int  val:v)
    {
        cout<<val<<" ";
    }
    

    return 0;
}