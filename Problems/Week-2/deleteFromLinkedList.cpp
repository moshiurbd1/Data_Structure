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
//insert at any position function
void insertAtAnyPosition(Node* &head,int pos,int val){
    Node* newNode=new Node(val);
    Node* tmp=head;
    if(pos==0){
        newNode->next=head;
        head=newNode;
        cout<<endl<<"Inserted at Head"<<endl;
        return;
    }
    if(pos<0){
        cout<<endl<<"Invalid index"<<endl;
        return;
    }
    for(int i=0; i<pos-1; i++){
        tmp=tmp->next;
        if(tmp==NULL ){
        cout<<endl<<"Invalid index"<<endl;
        return;
    }
    }

    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<"Inserted at you position : "<<pos<<endl;

}
void insertAtTail(Node* head,int val){
    Node* newNode=new Node(val);
    Node* tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
    cout<<"Inserted at Tail"<<endl;
}

//Delete any element using position Function
void deleteFromPosition(Node* &head,int pos){
Node* tmp=head;
if(tmp==NULL){
    cout<<"Index is not available"<<endl;
}
if(pos==0){
    Node* dNode=head;
    head=head->next;
    delete dNode;
    return;
}
for(int i=0; i<pos-1; i++){
    tmp=tmp->next;
}
if(tmp->next==NULL){
    cout<<"Invalid index"<<endl;
}
Node* deleteNode=tmp->next;
tmp->next=tmp->next->next;
delete deleteNode;

}
//print function for linked list
void print(Node*head){
Node*tmp=head;
while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->next;
}
cout<<endl;
}

int main(){
    Node* head=NULL;

    while(true){

            int option;
    cout<<"Option 1: print the linked list"<<endl;
    cout<<"Option 2: insert At any position"<<endl;
    cout<<"Option 3: insert At Tail"<<endl;
    cout<<"Option 4: delete from any position"<<endl;
    cin>>option;
    if(option==1){
        print(head);
    }else if(option==2){
        int pos,val;
        cout<<"Enter you position and value:"<<endl;
        cin>>pos>>val;
        insertAtAnyPosition(head,pos,val);
    }else if(option==3){
        int val;
        cout<<"Enter your value : "<<endl;
        cin>>val;
        insertAtTail(head,val);
    }else if(option==4){
        int pos;
        cout<<"Enter your Position: "<<endl;
        cin>>pos;
        deleteFromPosition(head,pos);
    }
    }


return 0;
}

