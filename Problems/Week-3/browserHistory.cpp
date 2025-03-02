#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
string val;
Node* next;
Node* prev;

Node(string val){
    this->val=val;
    this->next=NULL;
    this->prev=NULL;
}
};
void insertAtTail(Node* &head, Node* &tail,string val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;

}

void print(Node* head){
    Node* tmp=head;
while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->next;
}
cout<<endl;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    string x;
    while(true){
        cin>>x;
        if(x=="end")break;

        insertAtTail(head,tail,x);
    }
print(head);
int q;
cin>>q;
while(q--){

}





return 0;
}


