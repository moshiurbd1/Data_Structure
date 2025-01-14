#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
vector<int>a(n);

for(int i=0; i<n; i++){
    cin>>a[i];
}

for(auto i=a.end()-1; i>=a.begin(); i--){
    cout<<*i<<" ";
}
return 0;}
