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
void insertAtAnyPosition(Node* &head,int pos,int val){
    Node* newNode=new Node(val);
    if(pos==0){
        newNode->next=head;
        head=newNode;
        return;
    }else if(pos==1){
            if(head==NULL){
                head=newNode;
                return;
            }
    Node* tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
        return;
    }else if(pos==2 && val==0){
        Node* dNode=head;
        head=head->next;
        delete dNode;
        return;
    }else if(pos==2 && val>0){
        Node* tmpx=head;
        for(int i=0; i<val-1; i++){
            tmpx=tmpx->next;
            if(tmpx==NULL){
                return;
            }
        }
        if(tmpx->next==NULL){
            return;
        }
        Node* deleteNode=tmpx->next;
        tmpx->next=tmpx->next->next;
        delete deleteNode;
    }


}

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


int query;
cin>>query;
while(query--){
    int pos,val;
    cin>>pos>>val;
    insertAtAnyPosition(head,pos,val);
    print(head);
}




return 0;
}


