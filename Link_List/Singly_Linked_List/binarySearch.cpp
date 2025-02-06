#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++){
    cin>>a[i];
}
int x,l=0,r=n-1;
cin>>x;
int flag=0;
while(l<=r){
   int mid=(r+l)/2;
   if(a[mid]==x){
    flag=1;
    break;
   }
   if(x>a[mid]){
    l=mid+1;
   }else{
    r=mid-1;
   }
}
if(flag==1){
    cout<<"Found";
}else{
    cout<<"Not Found";
}

return 0;
}
