
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
int Size(Node* head){
    int cnt=0;
while(head!=NULL){
    cnt++;
    head=head->next;
}
return cnt;
}
void insertAtPosition(Node* &head,Node* &tail,int pos,int val){
    Node* newNode=new Node(val);
    if(pos==0){
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->next=head;
        head->prev=newNode;
        head=newNode;

    }else if(pos==Size(head)-1){
            tail->next==newNode;
            newNode->prev=tail;
            tail=newNode;
            return;
    }else{
        Node* tmp=head;
        for(int i=1; i<=pos-1; i++){
            tmp=tmp->next;
        }
        newNode->next=tmp->next;
        tmp->next=newNode;
        tmp->next->prev=newNode;
        newNode->prev=tmp;
    }
}


void print(Node* head){
    Node* tmp=head;
    cout<<"L -> ";
while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->next;
}
cout<<endl;
}

void printReverse(Node* tmp){
    if(tmp==NULL)return;
    printReverse(tmp->next);
    cout<<tmp->val<<" ";
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int queries;
    cin>>queries;
    while(queries--){
        int val,pos;
        cin>>pos>>val;
        if(pos>Size(head)){
        cout<<"Invalid"<<endl;
        }else{
        insertAtPosition(head,tail,pos,val);
         print(head);
         cout<<"R-> ";
         printReverse(head);
        }

    }




return 0;
}

