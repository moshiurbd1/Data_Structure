#include<bits/stdc++.h>

using namespace std;

int main(){
vector<int>v;
int n;
cin>>n;
for(int i=0; i<n; i++){
    int x;
    cin>>x;
    v.push_back(x);
}
for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
}
cout<<endl;
//Another way to take input
int b;
cin>>b;
vector<int>a(b);
for(int i=0; i<b; i++){
    cin>>a[i];
}
for(int i=0; i<b; i++){
    cout<<a[i]<<" ";
}

return 0;}
