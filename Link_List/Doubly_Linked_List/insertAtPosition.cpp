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
//insert function to insert at position
void insertAtPosition(Node* head,int pos,int val){
    Node* newNode=new Node(val);
    Node* tmp=head;
    for(int i=1; i<pos; i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;


}
//To insert at head function
void insertAtHead(Node* &head,Node* &tail,int val){
Node* newNode=new Node(val);
if(head==NULL){
    head=newNode;
    tail=newNode;
    return;
}
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

void insertAtTail(Node* &head,Node* &tail,int val){
Node* newNode=new Node(val);
if(tail==NULL){
    head=newNode;
    tail=newNode;
    return;
}
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
//Size function for linked list
int siz(Node* head){
Node* tmp=head;
int cnt=0;
while(tmp!=NULL){
    cnt++;
    tmp=tmp->next;
}
return cnt;

}
//Print function
void print(Node* head){
Node* tmp=head;
while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->next;
}
cout<<endl;
}

void print_reverse(Node* tail){
Node* tmp=tail;
while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->prev;
}
cout<<endl;
}

int main(){
//Node* head=NULL;
//Node* tail=NULL;
Node* head=new Node(10);
Node* a=new Node(20);
Node* b=new Node(30);
Node* c=new Node(40);

head->next=a;
a->prev=head;
a->next=b;
b->prev=a;
b->next=c;
c->prev=b;
Node* tail=c;
int pos,val;
cout<<"Enter your position and value"<<endl;
cin>>pos>>val;
if(pos==0){
    insertAtHead(head,tail,val);
     print(head);
     print_reverse(tail);
}else if(pos==10){
    insertAtTail(head,tail,val);
    print(head);
    print_reverse(tail);

}else if(pos>=siz(head)){
    cout<<"Invalid Position"<<endl;
}else{
    insertAtPosition(head,pos,val);
    print(head);
    print_reverse(tail);
}

return 0;
}
