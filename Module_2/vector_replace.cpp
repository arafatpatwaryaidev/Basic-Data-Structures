#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,2,6,7,8,2};
    replace(v.begin(),v.end(),2,222);
    for (int x:v)
    {
       cout<<x<<endl;
    }
    

    return 0;
}