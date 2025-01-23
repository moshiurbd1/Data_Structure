#include<bits/stdc++.h>
using namespace std;

int main(){
long long int n;
cin>>n;
vector<long long int>a(n);
vector<long long int>prfix(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}
prfix[0]=a[0];
for(int i=1; i<n; i++){
    prfix[i]=prfix[i-1]+a[i];
}
for(auto i=prfix.end()-1; i>=prfix.begin(); i--){
    cout<<*i<<" ";
}


return 0;}
