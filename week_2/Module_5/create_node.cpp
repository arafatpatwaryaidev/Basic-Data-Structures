#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
};
int main(){
 Node a,b;

 a.val =110;
 b.val =210;

 a.next=&b;
 b.next= NULL;
cout<<a.val<<endl;
    return 0;
}