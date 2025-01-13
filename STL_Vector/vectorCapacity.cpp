#include<bits/stdc++.h>

using namespace std;

int main(){

vector<int>v;
cout<<v.max_size()<<endl;
//capacity() show the capacity of vector
cout<<v.capacity()<<endl;
v.push_back(20);
//push_back() increase capacity doubly
cout<<v.capacity()<<endl;
v.clear();//clear() does not delete the memory but ignore

cout<<v.size()<<endl;
cout<<v[0]<<endl;
//empty() return 0 or 1
cout<<v.empty()<<endl;
vector<int>n(5,1);
//resize the vector
n.resize(7,100);
for(int i=0; i<7; i++){
    cout<<n[i]<<" ";
}


return 0;
}
