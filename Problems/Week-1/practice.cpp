#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
for(int k=0; k<t; k++){
int n;
cin>>n;
vector<int>a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}
int flag=1;
for(int i=0;i<n; i++){
    for(int j=i+1; j<n; j++){
        if(a[i]>a[j]){
            flag=0;
        }
    }
}
if(flag==1){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
return 0;
}
