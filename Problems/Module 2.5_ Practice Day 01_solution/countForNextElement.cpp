#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
vector<int>a(n);

for(int i=0; i<n; i++){
    cin>>a[i];

}
int cnt=0,x;

for(int i=0; i<n; i++){
  for(int j=i+1; j<n; j++){
    if(a[i]==a[j]-1){
        cnt++;
        if(a[i]==a[j]){
            cnt++;
        }
    }
  }
}
cout<<cnt;
return 0;}


