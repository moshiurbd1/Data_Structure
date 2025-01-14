#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>v={1,2,3,4,5,6,7,8,9,10};
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
cout<<v.max_size()<<endl;
v.resize(20);
cout<<v.size()<<" "<<v.capacity()<<endl;
if(v.empty()==0){
    cout<<"Empty"<<endl;
}else{cout<<"Not Empty"<<endl;}
v.resize(10);

//replace(v.begin(),v.end(),10,100);

for(int i:v){
        replace(v.begin(),v.end(),i,100);
}
for(int i:v){

    cout<<i<<" ";
}
return 0;
}
