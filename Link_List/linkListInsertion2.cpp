
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
void print(Node* head){
Node* tmp=head;
cout<<"Your Link List: "<<endl;
    while(tmp!=NULL){
        cout<<tmp->val<<endl;
       tmp = tmp->next;
    }

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
print(head);
}else if(n==2){
    print(head);
}else if(n==3){
    break;
}
}



return 0;}

