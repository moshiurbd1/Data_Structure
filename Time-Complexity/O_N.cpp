#include<bits/stdc++.h>
using namespace std;
//O(N) time complexity
int main(){
int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++//i+1,i+2){
    cin>>a[i];
}
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}

return 0;
}
