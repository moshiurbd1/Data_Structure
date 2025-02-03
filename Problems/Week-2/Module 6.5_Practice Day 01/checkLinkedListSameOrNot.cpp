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
void insertAtHeadAndTail(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
int sizeOfLinkedList(Node*head){
Node* tmp=head;
int cnt=0;
while(tmp!=NULL){
    cnt++;
    tmp=tmp->next;
}
return cnt;
}

void compareLinkedList(Node*head,Node*head1){
Node* tmp=head;
Node* tmp1=head1;

while(tmp!=NULL){
    if(tmp->val!=tmp1->val){
        cout<<"NO"<<endl;
        return;
    }
    tmp=tmp->next;
    tmp1=tmp1->next;
}
cout<<"YES"<<endl;
}
int main(){
Node* head=NULL;
Node* tail=NULL;

Node* head1=NULL;
Node* tail1=NULL;
int val;
while(true){
    cin>>val;
    if(val==-1)break;
    insertAtHeadAndTail(head,tail,val);

}
while(true){
    cin>>val;
    if(val==-1)break;
    insertAtHeadAndTail(head1,tail1,val);

}

int x=sizeOfLinkedList(head);
int y=sizeOfLinkedList(head1);
if(x!=y){
    cout<<"NO"<<endl;
}else{
compareLinkedList(head,head1);
}



return 0;
}


