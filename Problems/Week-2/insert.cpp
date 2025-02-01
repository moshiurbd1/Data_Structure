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
void insrt(Node* &head,int val){
Node* newNode=new Node(val);

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
void print(Node* head){
Node* tmp=head;

while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->next;
}
cout<<endl;
}
int main(){
Node* head=new Node(10);
while(true){
        cout<<"Enter 1 to inset element"<<endl;
        cout<<"Enter 2 to print element"<<endl;
    int op;
cin>>op;
if(op==1){
        int v;
        cout<<"Enter a value to insert: "<<endl;
        cin>>v;
    insrt(head,v);

}else if(op==2){
    print(head);
}
}

return 0;}
