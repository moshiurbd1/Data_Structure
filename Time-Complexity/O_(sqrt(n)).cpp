#include<bits/stdc++.h>
using namespace std;
//O() time complexity
int main(){
int n;
cin>>n;
//Similar complexity
/*for(int i=1; i*i<=n; i++){
    if(n%i==0){
        cout<<i<<" ";
    if(n/i !=i)cout<<n/i<<endl;
    }
    }*/

    for(int i=1; i<=sqrt(n); i++){
        cout<<i<<" ";
    }
return 0;}
