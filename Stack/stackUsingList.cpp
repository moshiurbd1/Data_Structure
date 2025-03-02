#include<bits/stdc++.h>
using namespace std;
class myStack{
public:
    list<int>l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
};
int main(){
    myStack stk;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        stk.push(x);
    }
    while(stk.empty()==false){
        cout<<stk.top()<<" ";
        stk.pop();
    }

return 0;
}
