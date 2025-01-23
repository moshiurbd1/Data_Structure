#include<bits/stdc++.h>
using namespace std;

int main(){
long long int n,q;
cin>>n>>q;
long long int a[n],b[n];
for(int i=0; i<n; i++){
    cin>>a[i];
}
b[0]=a[0];
for(int i=1; i<n; i++){
    b[i]=b[i-1]+a[i];
}

while(q--){
    long long l,r;
    cin>>l>>r;
    l--;
    r--;
    long long int sum=0;
    if(l==0){
        sum=b[r];
    }else{
        sum=b[r]-b[l-1];
    }
    cout<<sum<<endl;
}


return 0;
}

