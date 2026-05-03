#include<iostream>
using namespace std;
struct Node{int data;Node* next;};
int main(){
Node* head=NULL;
for(int i=0;i<3;i++){
Node* n=new Node();
cin>>n->data;
n->next=head;
head=n;
}
Node *prev=NULL,*curr=head,*next;
while(curr){
next=curr->next;
curr->next=prev;
prev=curr;
curr=next;
}
for(Node* t=prev;t;t=t->next) cout<<t->data<<" ";
}