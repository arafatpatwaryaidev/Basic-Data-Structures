#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList = {10, 20, 30};
    list<int> newList;
    newList = myList;

    for (int val : newList)
    {
        cout<< val <<endl;
    }
    

    return 0;
}