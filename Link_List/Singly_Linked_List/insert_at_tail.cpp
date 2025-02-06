
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
void insrt(Node* &head,int a){
    Node* newNode=new Node(a);
    if(head==NULL){
        head=newNode;
        return;
    }
}
void print(Node* head){
Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val;
       tmp = tmp->next;
    }
}
int main(){
Node*head=NULL;
int a;
cin>>a;
insrt(head,a);
print(head);



return 0;}
