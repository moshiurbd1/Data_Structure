#include<bits/stdc++.h>
using namespace std;
int main(){
list<int>x(5,9);
cout<<x.size();
cout<<endl;
x.resize(3);
for(int val:x){cout<<val<<" ";}cout<<endl;
x.resize(5);
for(int val:x){cout<<val<<" ";}cout<<endl;
cout<<x.max_size();
x.clear();
cout<<endl<<x.size();
return 0;
}
