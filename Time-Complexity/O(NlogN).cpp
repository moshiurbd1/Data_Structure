#include<bits/stdc++.h>
using namespace std;
// O(NlogN) time complexity
int main(){
int n;
cin>>n;
int a[n];
for(int i=1; i<=n; i++){
    cin>>a[i];
}

for(int i=1; i<=n; i++){
    int x=a[i];
    while(x>0){
        int digit =x%10;
        cout<<digit<<" ";
        x/=10;
    }
    cout<<endl;
}
return 0;
}
