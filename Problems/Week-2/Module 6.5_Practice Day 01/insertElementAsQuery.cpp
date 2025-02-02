#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int val){
    this->val=val;
    this->next=NULL;
    }
    };
//insert at any position function
void insertAtAnyPosition(Node* &head,int pos,int val){
    Node* newNode=new Node(val);
    Node* tmp=head;
    if(pos==0){
        newNode->next=head;
        head=newNode;
        cout<<endl<<"Inserted at Head"<<endl;
        return;
    }
    for(int i=0; i<pos-1; i++){
        tmp=tmp->next;
    }
    if(tmp==NULL || pos<0){
        cout<<endl<<"Invalid index"<<endl;
        return;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<"Inserted at you position : "<<pos<<endl;

}
//insert at tail function
void insertAtTail(Node* &head,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;

}
//print function for linked list
void print(Node*head){
Node*tmp=head;
while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->next;
}
cout<<endl;
}

int main(){
    Node* head=NULL;
    int i;
while(true){
    cin>>i;
    if(i==-1)break;
    insertAtTail(head,i);
}
int query;
cout<<"Enter your no of Query"<<endl;
cin>>query;
while(query--){
    int pos,val;
    cout<<"Enter your position and value:"<<endl;
    cin>>pos>>val;
    insertAtAnyPosition(head,pos,val);
    print(head);
}




return 0;
}

