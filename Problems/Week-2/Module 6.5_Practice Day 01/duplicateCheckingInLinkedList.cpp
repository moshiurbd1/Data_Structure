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
void print(Node*head){
Node* tmp=head;
int cnt=0;
while(tmp!=NULL){
    cnt++;
    tmp=tmp->next;
}
cout<<cnt<<endl;
}
int main(){
    int a[100]={0};
Node* head=NULL;
insertAtTail(head,8);
int i;
while(true){
    cin>>i;
    if(i==-1)break;
    a[i]++;
    insertAtTail(head,i);
}

int flag=0;
for(int i=0; i<100; i++){
    if(a[i]>1){
        flag=1;
        break;
    }
}
if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
return 0;
}


