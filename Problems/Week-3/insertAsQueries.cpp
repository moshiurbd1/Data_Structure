
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
int Size(Node* head){
    int cnt=0;
while(head!=NULL){
    cnt++;
    head=head->next;
}
return cnt;
}
void insertAtPosition(Node* &head,Node* tail,int pos,int val){
    Node* newNode=new Node(val);
    if(pos==0){
        if(head==NULL){
            head=newNode;
            tail=newNode;
            cout<<"inserted at head"<<endl;
            return;
        }
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        cout<<"inserted at head"<<endl;

    }else if(pos>Size(head)){
        cout<<"Invalid"<<endl;
    }else{
        Node* tmp=head;
        for(int i=0; i<pos-1; i++){
            tmp=tmp->next;
        }
        newNode->next=tmp->next;
        tmp->next=newNode;
        tmp->next->prev=newNode;
        newNode->prev=tmp;
        cout<<"inserted at position"<<endl;
    }


}




void print(Node* head){
while(head!=NULL){
    cout<<head->val<<" ";
    head=head->next;
}
cout<<endl;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int queries;
    cin>>queries;
    while(queries--){
        cout<<"Enter your position and value: "<<endl;
        int val,pos;
        cin>>pos>>val;
        insertAtPosition(head,tail,pos,val);
         print(head);
    }






return 0;
}

