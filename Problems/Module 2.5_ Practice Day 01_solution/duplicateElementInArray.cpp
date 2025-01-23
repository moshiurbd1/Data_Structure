#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int>a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}

auto x = find(a.begin(),a.end(),a[i]);
cout<<*x<<" ";

return 0;}
