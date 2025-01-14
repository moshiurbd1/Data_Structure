#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
vector<int>a(n);

for(int i=0; i<n; i++){
    cin>>a[i];

}
int cnt=0,x;

for(int i=0; i<n; i++){
    auto it=find(a.begin(),a.end(),a[i]);
    auto x=find(a.begin(),a.end(),a[i]+1);
}
cout<<cnt;
return 0;}


