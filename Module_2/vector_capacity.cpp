#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v;
 // cout<<v.max_size()<<endl;
// cout<<v.capacity()<<endl;
 v.push_back(10);
 //cout<<v.capacity()<<endl;
 v.push_back(20);
 //cout<<v.capacity()<<endl;
 v.push_back(30);
 //cout<<v.capacity()<<endl;
 v.push_back(40);
 //cout<<v.capacity()<<endl;
 v.push_back(50);
 //cout<<v.capacity()<<endl;
 v.push_back(60);
//  v.clear(); // clear size or ignore
v.resize(4);
v.resize(9,112);
cout<< v.size()<<endl;
for (int i = 0; i < v.size(); i++)
{
  cout<<v[i]<<" ";
}
//cout<<v[2]<<endl;

    return 0;

}