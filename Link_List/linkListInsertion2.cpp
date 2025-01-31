
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
void insrt(Node* &head,int a){
    Node* newNode=new Node(a);
    Node* tmp=head;
    if(head==NULL){
        head=newNode;
        return;
    }
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void print(Node* head,int cnt){
Node* tmp=head;
cout<<endl<<"Your Link List : "<<endl<<endl;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
       tmp = tmp->next;
       cnt++;
    }
    cout<<endl;
    cout<<endl<<"Size of Linked list : "<<cnt<<endl<<endl;
}
int main(){
Node*head=NULL;

while(true){
    cout<<"Option 1: Insert at tail"<<endl;
    cout<<"Option 2: Print Linked List"<<endl;
    cout<<"Option 3: Terminate"<<endl;
    int n;
cin>>n;
if(n==1){
        cout<<"Please Enter a value:"<<endl;
    int a;
cin>>a;
insrt(head,a);
}else if(n==2){
    int cnt=0;
    print(head,cnt);
}else if(n==3){
    break;
}
}



return 0;}

