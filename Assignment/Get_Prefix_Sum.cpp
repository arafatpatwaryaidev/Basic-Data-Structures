#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int q;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
     //prefix of sum
     int pre[n];
     pre[0]= a[0];
     for (int i = 1; i < n; i++)
     {
        pre[i] =  a[i] + pre[i-1];
     }
     
     //prof
     for (int i = 0; i < n; i++)
     {
        cout<<pre[i]<<" ";
     }
     

    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int sum=0;
        if(l==0) sum=pre[r];
        else sum=pre[r]-pre[l-1];
        cout<<sum<<endl;
    }
    

    return 0;
}