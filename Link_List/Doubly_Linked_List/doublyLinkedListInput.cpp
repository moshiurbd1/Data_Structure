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
Node* head=NULL;
Node* tail=NULL;
int val;
cout<<"Enter your value"<<endl;
    while(true){
        if(val==-1){
            break;
        }
        cin>>val;
    insertAtTail(head,tail,val);
    }

    print(head);
    print_reverse(tail);


return 0;
}

