#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>x={10,20,30};

for(int i:x){
    cout<<i<<" ";
}
cout<<endl;
x.insert(x.begin()+1,0);
for(int i:x){
    cout<<i<<" ";
}
cout<<endl;
vector<int>a={1,2,3};
a.insert(a.begin()+0,x.begin(),x.end());
for(int i:a){
    cout<<i<<" ";
}
return 0;
}

