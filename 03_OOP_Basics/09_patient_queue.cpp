#include<iostream>
using namespace std;
struct Node{int data; Node* next;};
int main(){
Node *head=NULL,*temp;
for(int i=1;i<=3;i++){
Node* n=new Node();
n->data=i;
n->next=NULL;
if(!head) head=temp=n;
else{temp->next=n; temp=n;}
}
for(temp=head;temp;temp=temp->next) cout<<temp->data<<" ";
}