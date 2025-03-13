#include<bits/stdc++.h>
using namespace std;
class s{
public:
    list<int>l;
    int sz=0;
    void push(int val){
        sz++;
        l.push_back(val);
    }
    void pop(){
        sz--;
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    bool emty(){
        if(sz==0)return true;
        else return false;
    }

};
class q{
public:
    list<int>l2;
    int sz=0;
    void push(int val){
        sz++;
        l2.push_back(val);
    }
    void pop(){
        sz--;
        l2.pop_front();
    }
    int frnt(){
        return l2.front();
    }

    bool emty(){
        if(sz==0)return true;
        else return false;
    }

};

int main(){
    int m,n;
    cin>>m>>n;
    s st;
    q que;
    while(m--){
        int x;
        cin>>x;
        st.push(x);
    }
    while(n--){
        int x;
        cin>>x;
        que.push(x);
    }
    bool flag=true;
    if(st.sz!=que.sz){
            false;
    }else{
        while(!st.emty()){
            if(st.top()!=que.frnt()){
                flag=false;
                break;
            }
            st.pop();
            que.pop();
        }
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

return 0;
}
