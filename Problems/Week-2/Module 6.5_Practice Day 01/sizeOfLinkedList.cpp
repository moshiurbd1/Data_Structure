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
void print(Node*head){
Node* tmp=head;
int cnt=0;
while(tmp!=NULL){
    cnt++;
    tmp=tmp->next;
}
cout<<cnt<<endl;
}
int main(){
Node* head=NULL;
insertAtTail(head,8);
int i;
while(true){
    cin>>i;
    if(i==-1)break;
    insertAtTail(head,i);
}
print(head);
return 0;
}

