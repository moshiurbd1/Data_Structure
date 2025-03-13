#include<bits/stdc++.h>
using namespace std;
class myStack{
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
    int siz(){
        return sz;
    }
    bool emty(){
        return l.empty();
    }
    };
int main(){
    myStack st,st2;
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        st.push(x);
    }
    int n;
    cin>>n;
        for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st2.push(x);
    }
    bool flag=true;
    if(st.siz()!=st2.siz()){
        flag=false;
    }else{
        while(!st.emty()){
            if(st.top()!=st2.top()){
                flag=false;
                break;
            }
            st.pop();
            st2.pop();
        }
    }
    if(flag){
        cout<<"YES";
    }else{cout<<"NO";
    }
return 0;
}
