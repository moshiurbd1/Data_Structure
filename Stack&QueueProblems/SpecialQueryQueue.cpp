#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string>que;
int query;
cin>>query;
while(query--){
    int x;
    cin>>x;
    if(x==0){
        string s;
        cin>>s;
        que.push(s);
    }else{
        if(que.empty()&&x==1){
            cout<<"Invalid"<<endl;
        }else{
            cout<<que.front()<<endl;
            que.pop();
        }
    }
}
return 0;
}
