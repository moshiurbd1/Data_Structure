#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0; i<n;i++){
    cin>>a[i];
}
int i=0,j=n-1,flag=1;
while(i<j){
    if(a[i]!=a[j]){
        flag=0;
        break;
    }
    i++;
    j--;
}
if(flag==1){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
return 0;
}

