#include<bits/stdc++.h>
using namespace std;
//replace() and find() not under vector
int main(){
vector<int>v={1,2,3,2,4,2,5};
replace(v.begin(),v.end(),2,200);
for(int x:v){
    cout<<x<<" ";
}
cout<<endl;

vector<int>a={1,2,3,4,5,6};

auto it=find(a.begin(),a.end(),3);
//cout<<*it;
if(it==a.end()){
    cout<<"Not found"<<endl;
}else{cout<<"Found";}

return 0;
}
