#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
    this->val=val;
    this->next=NULL;
    this->prev=NULL;
    }
};
class myStack{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;

    void push(int val){
        sz++;
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=tail->next;
    }
    void pop(){
        if(tail==NULL)return;
        sz--;
        Node* deleteNode=tail;
        tail=tail->prev;
        if(tail==NULL)head=NULL;
        else tail->next=NULL;
        delete deleteNode;
    }
    int top(){
        return tail->val;
    }
    int Size(){
        return sz;
    }
    bool emty(){
        if(sz==0)return true;
        else return false;
    }
};
int main(){
myStack stk;
int n;
cin>>n;
for(int i=0; i<n;i++){
    int x;
    cin>>x;
    stk.push(x);
}
while(!stk.emty()){
    cout<<stk.top()<<endl;
    stk.pop();
}
return 0;
}
