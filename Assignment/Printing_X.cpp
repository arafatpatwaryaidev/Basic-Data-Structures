#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    int devide = n / 2;

    for (int i = 0; i < n; i++){
       for (int j = 0; j < n; j++){
        if(i == j && i == devide){
            cout << "X";
        }else if(i == j){
            cout << "\\";
        }else if(i + j == n - 1){
            cout<< "/";
        }else {
            cout << " ";
        }
       }

       cout<<endl;
       
    }
    
}

int main(){
    int n;
cin >> n;
pattern(n);
    return 0;
}