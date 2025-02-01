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
int cnt=0;
while(tmp->next!=NULL){
    cnt++;
    tmp=tmp->next;
}
return cnt;
}
void printMiddle(Node* head,int x){
    Node* tmp=head;
if(x%2==0){
    int middle=x/2;
    for(int i=1; i<=middle; i++){
        tmp=tmp->next;
    }
    cout<<tmp->val<<" "<<tmp->next->val<<endl;
}else{
    int y=x/2;
    for(int i=0; i<=y; i++){
        tmp=tmp->next;
    }
    cout<<tmp->val<<endl;
}
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
printMiddle(head,x);

return 0;
}


