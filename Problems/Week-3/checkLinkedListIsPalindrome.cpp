
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
void insertAtTail(Node* &head, Node* &tail,int val){
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
void reverseDoublyLinkedList(Node* &head,Node* cur){
    if(cur->next==NULL){
        head=cur;
        return;
    }
    reverseDoublyLinkedList(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}

void copyLinkedList(Node* head,Node* &head1){
    Node* tmp=head;
    while(tmp!=NULL){
        head1=tmp;
        tmp=tmp->next;
        head1=head1->next;
    }
    head1=head;
}
void isPlindrome(Node* head,Node* head1){
bool flag=true;
Node* tmp=head;
Node* tmp1=head1;
while(tmp!=NULL){
    if(tmp->val!=tmp1->val){
        flag=false;
    }
    tmp=tmp->next;
    tmp1=tmp1->next;
}
if(flag==true){
    cout<<"Palindrome"<<endl;
}else{
    cout<<"Not Palindrome"<<endl;
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
    int x;
    while(true){
        cin>>x;
        if(x==-1)break;

        insertAtTail(head,tail,x);
    }

    print(head);
    Node* head1=NULL;
    Node* tail1=NULL;

    copyLinkedList(head,head1);

    reverseDoublyLinkedList(head1,head1);

    isPlindrome(head,head1);



return 0;
}

