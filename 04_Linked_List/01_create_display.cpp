#include<iostream>
using namespace std;
struct Node{int data;Node* next;};
int main(){
Node *head=NULL,*temp,*newNode;
for(int i=0;i<3;i++){
newNode=new Node();
cin>>newNode->data;
newNode->next=NULL;
if(!head) head=temp=newNode;
else{temp->next=newNode; temp=newNode;}
}
for(temp=head;temp;temp=temp->next) cout<<temp->data<<" ";
}