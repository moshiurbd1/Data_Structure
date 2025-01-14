#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
vector<int>a(n);

for(int i=0; i<n; i++){
    cin>>a[i];

}
for(auto i=a.begin(); i<a.end(); i++){
    if(*i>0){
    replace(a.begin(),a.end(),*i,1);
    }else if(*i<0){
    replace(a.begin(),a.end(),*i,2);
    }
}
for(auto i=a.begin(); i<a.end(); i++){
    cout<<*i<<" ";
}
return 0;}

