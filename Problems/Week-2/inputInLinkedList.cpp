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
void insrt(Node*&head,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        cout<<"Inserted at head"<<endl<<endl;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
    cout<<"Inserted at Tail"<<endl<<endl;
}
int sizeOfLinkedList(Node* &head,int cnt){
    Node* tmp=head;
    while(tmp!=NULL){
        tmp=tmp->next;
        cnt++;

    }
 return cnt;
}
void Print(Node* head){
    Node* tmp=head;
    while(head!=NULL){
            cout<<tmp->val<<endl;
        tmp=tmp->next;

    }
}

int main(){

Node* head=NULL;
int cnt=0;

while(true){
    cout<<"Option 1: Insert a value"<<endl;
    cout<<"Option 2: Size of Linked List"<<endl;
    cout<<"Option 3: Print Linked List"<<endl;
    cout<<"Option >3: Terminate"<<endl;
    int n;
cin>>n;
if(n==1){
        cout<<"Please Enter a value:"<<endl;
    int a;
cin>>a;
insrt(head,a);

}else if(n==2){
    int cnt=0;
    int x=sizeOfLinkedList(head,cnt);
    cout<<x<<endl;
}else if(n==3){
    Print(head);
}else{
    break;
}

}

return 0;
}

