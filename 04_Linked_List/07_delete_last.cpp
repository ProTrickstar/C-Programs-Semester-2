#include<iostream>
using namespace std;
struct Node{int data;Node* next;};
int main(){
Node *head=NULL,*temp;
for(int i=0;i<3;i++){
Node* n=new Node();
cin>>n->data;
n->next=NULL;
if(!head) head=temp=n;
else{temp->next=n; temp=n;}
}
temp=head;
while(temp->next->next) temp=temp->next;
delete temp->next;
temp->next=NULL;
for(temp=head;temp;temp=temp->next) cout<<temp->data<<" ";
}