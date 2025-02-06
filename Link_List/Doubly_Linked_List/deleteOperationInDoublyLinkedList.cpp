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
//Delete at Head function
void deleteAtHead(Node* &head){
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
    head->prev=NULL;

}
//Delete at position function
void deleteAtPosition(Node* head,int pos){
    Node* tmp=head;
    for(int i=1; i<pos; i++){
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;
}
//Delete at Tail function
void deleteAtTail(Node* &tail){
    Node* deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    tail->next=NULL;
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
cout<<"Linked List : ";
print(head);
cout<<"Size of Linked List : "<<siz(head);
cout<<endl;
cout<<"Enter your position to delete: "<<endl;
cin>>pos;
if(pos>=siz(head)){
    cout<<"Invalid Position"<<endl;
}else if(pos==0){
    deleteAtHead(head);

}else if(pos<siz(head)){
    deleteAtPosition(head,pos);

}else if(pos==siz(head)-1){
    deleteAtTail(tail);
}
print(head);


return 0;
}

