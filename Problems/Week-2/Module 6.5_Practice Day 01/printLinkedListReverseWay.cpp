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
void print(Node* &head){

    if(head==NULL)return;
    print(head->next);
    cout<<head->val<<" ";
}
int main(){
Node* head=NULL;
Node* tail=NULL;
int val;
while(true){
    cout<<"Enter a value to insert:"<<endl;
    cin>>val;
    if(val==-1)break;
    insertAtHeadAndTail(head,tail,val);

}
print(head);
return 0;
}

