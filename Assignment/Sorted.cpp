#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;

  while (t--)
  {
    int n;
    cin>> n;

    vector<int> Arr(n);
    for (int  i = 0; i < n; i++)
    {
     cin>> Arr[i];
    }

    bool sort = true;
    for (int i = 1; i < n; i++)
    {
      if(Arr[i] < Arr[i - 1]){
        cout<<"NO"<<endl;
        sort = false;
        break;
      }
    }
    
    if(sort){
      cout<<"YES" <<endl;
    }
    
  }
  


    return 0;
}