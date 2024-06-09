#include<bits/stdc++.h>
using namespace std;
int main(){

   int n;
   cin>>n;
   int a[n];

   for (int i = 0; i < n; i++)  //O(N)
   {
   cin>>a[i];
   }

   int sum= 0;

   for (int i = 0; i < n; i+=2)  //O(N)
   {
    // sum+= a[i];
    if(i % 2 == 0){ // for even
        sum+= a[i];
    }
   }
   
   cout<< sum <<endl;
   

    return 0;
}