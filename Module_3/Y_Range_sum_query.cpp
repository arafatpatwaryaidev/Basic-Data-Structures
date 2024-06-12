#include<bits/stdc++.h>
using namespace std;
//using brut force technique
int main(){
    int q,n;
    cin>>n >>q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    //  Query
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int sum = 0;

        for (int i = l; i <=r; i++)
        {
            sum+=arr[i];
        }

        cout<<sum<<endl;
        
    }
    

    return 0;
}