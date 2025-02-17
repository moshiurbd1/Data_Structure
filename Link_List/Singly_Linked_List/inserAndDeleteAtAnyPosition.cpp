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
int size(Node* head){
int cnt=0;
Node* tmp=head;
while(tmp!=NULL){
    cnt++;
    tmp=tmp->next;
}
return cnt;
}
void insertAtAnyPosition(int pos,int val,Node* &head,Node* &tail){
    Node* newNode=new Node(val);
    if(pos==0 && head==NULL){
        head=newNode;
        tail=newNode;
        cout<<"Inserted at head and head was NULL"<<endl;
    }else if(pos==0 && head!=NULL){
        newNode->next=head;
        head=newNode;
        cout<<"Inserted at head and head was not NULL"<<endl;
    }else if(pos==size(head)){
        tail->next=newNode;
        tail=newNode;
        cout<<"Inserted at tail"<<endl;
    }else{

        Node* tmp=head;
        for( int i=1; i<pos; i++){
            tmp=tmp->next;
        }
        newNode->next=tmp->next;
        tmp->next=newNode;
        cout<<"Inserted at your position"<<endl;
    }

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
Node* head=NULL;
Node* tail=NULL;
cout<<"Enter your Position and value: "<<endl;
int pos,val;
while(true){
    cin>>pos>>val;
    if(val==-1){
        break;
    }
    insertAtAnyPosition(pos,val,head,tail);
    print(head);
}

return 0;
}
