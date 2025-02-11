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
void insertAtTail(Node* &head, Node* &tail,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;

}

int Size(Node* head){
Node* tmp=head;
int cnt=0;
while(tmp!=NULL){
        cnt++;
    tmp=tmp->next;
}
return cnt;
}
void sameOrNot(Node* head, Node* head1){
    Node* tmp=head;
    Node* tmp1=head1;
    while(tmp!=NULL){
        if(tmp->val!=tmp1->val){
            cout<<"Not Same"<<endl;
            return;
        }
        tmp=tmp->next;
        tmp1=tmp1->next;
    }
    cout<<"Same"<<endl;
}

void print(Node* head){
while(head!=NULL){
    cout<<head->val<<" ";
    head=head->next;
}
cout<<endl;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int x;
    while(true){
        cin>>x;
        if(x==-1)break;

        insertAtTail(head,tail,x);
    }
    Node* head1=NULL;
    Node* tail1=NULL;
        int y;
    while(true){
        cin>>y;
        if(y==-1)break;

        insertAtTail(head1,tail1,y);
    }

    if(Size(head)!=Size(head1)){
        cout<<"Not Same"<<endl;
    }else{
        sameOrNot(head,head1);
    }




return 0;
}
