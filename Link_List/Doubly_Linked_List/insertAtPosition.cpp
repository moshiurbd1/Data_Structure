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
void print(Node* head){
Node* tmp=head;
while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->next;
}
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
cout<<"Enter your position and value"<<endl;
cin>>pos>>val;
insertAtPosition(head,pos,val);

print(head);

return 0;
}
