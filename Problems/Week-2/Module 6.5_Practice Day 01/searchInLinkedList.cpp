
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
int t;
cin>>t;
for(int i=0; i<t; i++){
    Node* head=NULL;
Node* tail=NULL;
int val;
while(true){
    cin>>val;
    if(val==-1)break;
    insertAtHeadAndTail(head,tail,val);

}


int x,cnt=0,index,flag=0;
cin>>x;

for(Node* i=head; i!=NULL; i=i->next){
        cnt++;
        if(i->val==x){
            index=cnt-1;
            flag=1;
            break;
        }


}
if(flag==1){
    cout<<index<<endl;
}else{
    cout<<-1<<endl;
}
}
return 0;
}


