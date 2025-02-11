#include<bits/stdc++.h>
using namespace std;
int main(){
list<int>x={1,2,3,4,5};
list<int>y;
y.assign(x.begin(),x.end());
for(int val:y){cout<<val<<" ";}
cout<<endl;
// Alternative and easy way to assign
y=x;
for(int val:y){cout<<val<<" ";}
cout<<endl;
y.push_back(10);
y.push_front(20);
for(int val:y){cout<<val<<" ";}
cout<<endl;
y.pop_back();
y.pop_front();
for(int val:y){cout<<val<<" ";}
cout<<endl;
//Alternative of insert y.insert(next(y.begin(),2),100);
//Alternative of insert y.insert(next(y.begin(),2),{10,20,30});
y.insert(next(y.begin(),2),x.begin(),x.end());
for(int val:y){cout<<val<<" ";}
cout<<endl;
y.erase(next(y.begin(),2));
y.erase(next(y.begin(),2),next(y.begin(),6));
for(int val:y){cout<<val<<" ";}
cout<<endl;
replace(y.begin(),y.end(),5,500);
for(int val:y){cout<<val<<" ";}
cout<<endl;
auto it=find(y.begin(),y.end(),500);
if(it==y.end()){
    cout<<"Not Found"<<endl;
}else{
    cout<<"Found"<<endl;
}
return 0;
}
