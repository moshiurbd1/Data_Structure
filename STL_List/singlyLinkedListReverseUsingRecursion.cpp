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
void reverse_mylist(Node* &head,Node* cur){
    if(cur->next==NULL){
        head=cur;
        return;
    }
    reverse_mylist(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;

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
Node* head=new Node(10);
Node* a=new Node(20);
Node* b=new Node(30);
Node* c=new Node(40);
head->next=a;
a->next=b;
b->next=c;
c->next=NULL;

reverse_mylist(head,head);
print(head);
return 0;
}
