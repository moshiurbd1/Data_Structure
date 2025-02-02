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
int print(Node*head){
Node* tmp=head;
int flag=1;
while(true){
    if(tmp->next==NULL){
        break;
    }
    if(tmp->val>tmp->next->val){
        flag=0;
    }
}
return flag;
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
int x=print(head);
if(x==1){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

return 0;
}



