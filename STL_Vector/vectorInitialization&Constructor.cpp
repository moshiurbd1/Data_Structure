#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>v;
cout<<v.size()<<endl;
vector<int>x(5);
cout<<x.size()<<endl;
vector<int>y(5,1);//assign 1 in all indexes from 0 to 4
for(int i=0; i<y.size(); i++){
    cout<<y[i]<<" ";
}
cout<<endl;
//to copy vector
vector<int>a(y);
for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
}
cout<<endl;
//or
vector<int>b(5,100);
x=b;
for(int i=0; i<x.size(); i++){
    cout<<x[i]<<" ";
}
cout<<endl;

int c[5]={1,2,3,4,5};

vector<int>d(c,c+5);
for(int i=0; i<5; i++){
    cout<<d[i]<<" ";
}
return 0;

}
