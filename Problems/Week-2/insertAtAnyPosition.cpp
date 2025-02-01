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
    for(int i=0; i<pos-1; i++){
        tmp=tmp->next;
    }
    if(tmp==NULL || pos<0){
        cout<<endl<<"Invalid index"<<endl;
        return;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<"Inserted at you position : "<<pos<<endl;

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
    cin>>option;
    if(option==1){
        print(head);
    }else if(option==2){
        int pos,val;
        cout<<"Enter you position and value:"<<endl;
        cin>>pos>>val;
        insertAtAnyPosition(head,pos,val);
    }
    }


return 0;
}
