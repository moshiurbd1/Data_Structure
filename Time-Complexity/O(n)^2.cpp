#include<bits/stdc++.h>
using namespace std;
//O(n^2) time complexity
int main(){
 int n;
 cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(a[i]<a[j]){
            int tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }
 }
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}
return 0;
}
