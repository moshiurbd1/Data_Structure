
#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>x={10,20,30,40,50};

for(int i:x){
    cout<<i<<" ";
}
cout<<endl;
x.erase(x.begin()+0);
for(int i:x){
    cout<<i<<" ";
}
cout<<endl;
x.erase(x.begin()+1,x.end()-1);
for(int i:x){
    cout<<i<<" ";
}
return 0;
}

