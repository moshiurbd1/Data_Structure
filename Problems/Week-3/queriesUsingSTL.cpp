#include<bits/stdc++.h>
using namespace std;

int main(){
list<int>mylist;
int q;
cin>>q;
while(q--){
    int x,v;
    cin>>x>>v;
    list<int>copylist;
    if(x==0){
        mylist.push_front(v);
        cout<<"L -> ";
        for(int n:mylist){cout<<n<<" ";}
        cout<<endl;
        copylist=mylist;
        copylist.reverse();
        cout<<"R -> ";
        for(int n:copylist){cout<<n<<" ";}
        cout<<endl;
    }else if(x==1){
        mylist.push_back(v);
        cout<<"L -> ";
        for(int n:mylist){cout<<n<<" ";}
        cout<<endl;
        copylist=mylist;
        copylist.reverse();
        cout<<"R -> ";
        for(int n:copylist){cout<<n<<" ";}
        cout<<endl;
    }else if(x==2){
        if(v<mylist.size()){
            mylist.erase(next(mylist.begin(),v));
        }
        cout<<"L -> ";
        for(int n:mylist){cout<<n<<" ";}
        cout<<endl;
        copylist=mylist;
        copylist.reverse();
        cout<<"R -> ";
        for(int n:copylist){cout<<n<<" ";}
        cout<<endl;
    }

}

return 0;
}
