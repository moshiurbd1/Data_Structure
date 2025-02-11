#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>newlist={10,20,40,20,70,30,60,40,50};
        for(int val:newlist){
        cout<<val<<" ";
    }
    cout<<endl;
    newlist.remove(20);
    for(int val:newlist){
        cout<<val<<" ";
    }
    cout<<endl;
    newlist.sort();
    for(int val:newlist){
        cout<<val<<" ";
    }
    cout<<endl;
    newlist.sort(greater<int>());
    for(int val:newlist){
        cout<<val<<" ";
    }
    cout<<endl;
    //sorted element can be unique
    newlist.unique();
    for(int val:newlist){
        cout<<val<<" ";
    }
    cout<<endl;
    newlist.reverse();
    for(int val:newlist){
        cout<<val<<" ";
    }
    cout<<endl;
return 0;
}
