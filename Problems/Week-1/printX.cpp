#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int k=n-1;
for(int i=0; i<n; i++){
        for(int s=0; s<=k; s++){
        cout<<" ";
    }
        cout<<"\\";

    for(int j=i; j<n; j++){
        cout<<" ";
    }
        cout<<"/";
        cout<<endl;
}
return 0;
}
