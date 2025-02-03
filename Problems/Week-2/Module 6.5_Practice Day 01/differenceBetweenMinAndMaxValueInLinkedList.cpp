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

int main(){
Node* head=NULL;
Node* tail=NULL;
int val;
while(true){
    cin>>val;
    if(val==-1)break;
    insertAtHeadAndTail(head,tail,val);

}
int minElement=INT_MAX,maxElement=INT_MIN;
for(Node* i=head; i!=NULL; i=i->next){
        if(i->val>maxElement){
            maxElement=i->val;
        }
        if(i->val<minElement){
            minElement=i->val;
        }

}
int x=maxElement-minElement;
cout<<x<<endl;
return 0;
}


