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
//Insert at tail Function for Linked list
void insrt(Node* &head,int x){
Node* newNode= new Node(x);
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
//Insert at any position in Linked list except head
void insertAtAnyPositionExceptHead(Node* &head,int v,int pos){
    //since linked list would be update that is why & sign with head pointer(&head)
    Node* nNode=new Node(v);
    Node* tmp=head;
    for(int i=1; i<=pos; i++){
        tmp=tmp->next;
    }
    nNode->next=tmp->next;
    tmp->next=nNode;
}
//Print Function for Linked list
void print(Node* head){
    Node* tmp=head;
    cout<<"Your Linkded list: ";
while(tmp!=NULL){

    cout<<tmp->val<<" ";
    tmp=tmp->next;
}
cout<<endl;
}
//
int main(){
    Node* head=NULL;
    while(true){
            cout<<"Choose an Option"<<endl;
    cout<<"Option 1: Insert at tail"<<endl;
    cout<<"Option 2: Insert at any position except Head:"<<endl;
    cout<<"Option 3: Print Linked List"<<endl;
    cout<<"Option 4: Terminate"<<endl;
    int op;
    cin>>op;
    if(op==1){
            cout<<"Enter a value to insert:"<<endl;
            int v;
            cin>>v;
            insrt(head,v);

    }else if(op==2){
        cout<<"Enter a value and a Position: "<<endl;
        int v,pos;
        cin>>v>>pos;
        insertAtAnyPositionExceptHead(head,v,pos);
    }else if(op==3){
        print(head);
    }else if(op==4){
        break;
    }
    }
return 0;
}
