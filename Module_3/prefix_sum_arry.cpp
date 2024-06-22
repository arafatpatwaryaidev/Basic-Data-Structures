#include<bits/stdc++.h>
using namespace std;
//using brut force technique
int main(){
    long long int q,n;
    cin>>n >>q;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
   long long int pre[n];
    pre[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i]=arr[i]+pre[i-1];
    }
   
    while (q--)
    {
      long long  int l,r;
        cin>>l>>r;
        l--;
        r--;
        long long int sum;

        if(l == 0) sum=pre[r];
        else sum=pre[r]-pre[l-1];

        

        cout<<sum<<endl;
        
    }
    

    return 0;
}