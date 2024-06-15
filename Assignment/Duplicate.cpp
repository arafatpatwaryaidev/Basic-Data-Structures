#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    sort(A.begin(),A.end());

    for (int i = 1; i < n; i++)
    {
        if(A[i]== A[i - 1]){
            cout<< "YES" <<endl;
            return 0;
        }
    }
    
    cout<< "NO"<<endl;
    return 0;

    

    return 0;
}