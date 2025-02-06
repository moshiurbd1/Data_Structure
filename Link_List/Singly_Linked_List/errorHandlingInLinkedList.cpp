
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
    cout<<endl<<"Inserted at tail"<<endl<<endl;
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
void insertAtAnyPositionExceptHead(Node* &head,int pos,int v){
    //since linked list would be update that is why & sign with head pointer(&head)
    Node* nNode=new Node(v);
    Node* tmp=head;
    for(int i=1; i<pos; i++){
        tmp=tmp->next;
        //This if condition for error handling of invalid index
        if(tmp==NULL){
            cout<<endl<<"Invalid index"<<endl<<endl;
            return;
        }
    }
    nNode->next=tmp->next;
    tmp->next=nNode;
}
//Insert at head function in linked list
void insertAtHead(Node* &head,int v){

    Node* xNode=new Node(v);
    xNode->next=head;
    head=xNode;
    cout<<endl<<"Inserted at Head"<<endl<<endl;
}
//Delete from position function except head
void deleteFromPosition(Node* head,int pos){
    Node* tmp=head;
    for(int i=1; i<pos-1; i++){
        tmp=tmp->next;
        //This if condition for error handling of invalid index
       if(tmp==NULL){
            cout<<"Invalid index"<<endl;
            return;
        }
    }
    if(tmp->next==NULL){
            cout<<"Invalid index"<<endl;
            return;
        }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    cout<<"Deleted the value the of position or index: "<<pos<<endl;
    delete deleteNode;
}
//Delete from head function
void deleteFromHead(Node* &head){
    if(head==NULL){
            cout<<endl<<"Head is not available"<<endl<<endl;
            return;
        }
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
    cout<<"Deleted from head"<<endl;
}
//Print Function for Linked list
void print(Node* head){
    Node* tmp=head;
    cout<<"Your Linked list: ";
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
    cout<<"Option 1: Insert at tail"<<endl;// No error
    cout<<"Option 2: Insert at any position except Head:"<<endl;// No error
    cout<<"Option 3: Print Linked List"<<endl;// No error
    cout<<"Option 4: Insert at head"<<endl;// No error
    cout<<"Option 5: Delete from any position"<<endl;// No error
    cout<<"Option 6: delete from head"<<endl;
    cout<<"Option 7: Terminate"<<endl;
    int op;
    cin>>op;
    if(op==1){
            cout<<"Enter a value to insert:"<<endl;
            int v;
            cin>>v;
            insrt(head,v);

    }else if(op==2){

        int v,pos;
        cout<<"Enter a value: "<<endl;
        cin>>v;
        cout<<"Enter a position: "<<endl;
        cin>>pos;
        insertAtAnyPositionExceptHead(head,pos,v);
    }else if(op==3){
        print(head);
    }else if(op==4){
        int v;
        cout<<"Enter a value:"<<endl;
        cin>>v;
        insertAtHead(head,v);
    }else if(op==5){
        int pos;
        cout<<"Enter a position or index:"<<endl;
        cin>>pos;
        if(pos==0){
            deleteFromHead(head);
        }else{
        deleteFromPosition(head,pos);
        }
    }else if(op==6){
    deleteFromHead(head);
    }else if(op==7){
        break;
    }
    }
return 0;
}
