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
void insertAtHeadAndTail(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void print(Node*head){
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
int val;
while(true){
    cout<<"Enter a value to insert:"<<endl;
    cin>>val;
    if(val==-1)break;
    insertAtHeadAndTail(head,tail,val);

}
for(Node* i=head; i->next!=NULL; i=i->next){
 //output using for loop       cout<<i->val<<" ";
    for(Node* j=i->next; j!=NULL; j=j->next){
        if(i->val>j->val){
            swap(i->val,j->val);
        }
    }
}
print(head);
return 0;
}

