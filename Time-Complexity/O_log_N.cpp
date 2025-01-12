#include<bits/stdc++.h>
using namespace std;
// O(logN) time complexity
int main(){
int n;
cin>>n;
while(n>0){
    int digit=n%10;
    n=n/10;
    cout<<digit<<" ";

}
//Similar complexity
//for(int i=1; i<n; i*=2){}
return 0;
}
