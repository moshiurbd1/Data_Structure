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
void insrt(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void deleteFromPosition(Node* &head,int pos){
Node* tmp=head;


for(int i=0; i<pos; i++){
    tmp=tmp->next;
}
Node* deleteNode=tmp->next;
tmp->next=tmp->next->next;
delete deleteNode;

}

void print(Node*head){
Node* tmp=head;

while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->next;
}
}
int main(){
Node* head=NULL;
Node* tail=NULL;
int val;
while(true){
    cin>>val;
    if(val==-1)break;
    insrt(head,tail,val);
}
vector<int>v;

for(Node* i=head; i->next!=NULL; i=i->next){
            int pos=0;
    for(Node* j=i->next; j!=NULL; j=j->next){

            pos++;
        if(i->val==j->val){
            v.push_back(pos);
        }
    }
}

for(auto i=v.begin(); i<v.end(); i++){
    cout<<*i<<" ";
}
cout<<endl;

print(head);
return 0;
}


