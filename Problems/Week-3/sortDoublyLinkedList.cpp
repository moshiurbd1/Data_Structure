
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
void sortDoublyLinkedList(Node* head){
    Node* tmp=head;
    for(Node* i=tmp; i->next!=NULL; i=i->next){
        for(Node* j=i->next; j!=NULL; j=j->next){
            if(i->val>j->val){
                swap(i->val,j->val);
            }
        }
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
    sortDoublyLinkedList(head);
    print(head);


return 0;
}


