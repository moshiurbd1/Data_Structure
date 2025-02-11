#include<bits/stdc++.h>
using namespace std;

int main(){
list<int>newList(5,10);
cout<<newList.front()<<" "<<newList.back();
cout<<endl;
list<int>list2(5,6);
int a[5]={0};
list<int>List3(a,a+5);//copy from array
vector<int>x={10,20,30};
list<int>y(x.begin(),x.end());//copy from vector
cout<<"Print newlist"<<endl;
for(auto it=newList.begin(); it!=newList.end(); it++){
    cout<<*it<<" ";
}
cout<<endl;
cout<<"Print list3 copy value form array"<<endl;
for(auto i=List3.begin(); i!=List3.end(); i++){
    cout<<*i<<" ";
}
cout<<endl;
for(auto i=y.begin(); i!=y.end(); i++){
    cout<<*i<<" ";
}
cout<<endl<<"Shortcut for loop can be used to print list"<<endl;
for(int val:x){
    cout<<val<<" ";
}
cout<<endl;
return 0;
}
