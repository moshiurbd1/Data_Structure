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

void print(Node* head){
    Node* tmp=head;
while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->next;
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
    Node* head2=NULL;
    Node* tail2=NULL;
    Node* tmp=tail;

    while(tmp!=NULL){
    int x=tmp->val;
        insertAtTail(head2,tail2,x);
        tmp=tmp->prev;
    }

    Node* tm=head2;
    Node* tm2=head;
    bool flag=true;

    while(tm!=NULL){
        if(tm->val!=tm2->val){
            flag=false;
            break;
        }
        tm=tm->next;
        tm2=tm2->next;
    }

    if(flag==true){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }

return 0;
}

