#include<bits/stdc++.h>
using namespace std;


int main(){
    int m,n;
    cin>>m>>n;
    stack<int>s;
    queue<int>q;
    while(m--){
        int x;
        cin>>x;
        s.push(x);
    }
    while(n--){
        int x;
        cin>>x;
        q.push(x);
    }
    bool flag=true;
    if(s.size()!=q.size()){
        flag=false;
    }else{
        while(!s.empty()){
            if(s.top()!=q.front()){
                flag=false;
                break;
            }
            s.pop();
            q.pop();
        }
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
return 0;
}
