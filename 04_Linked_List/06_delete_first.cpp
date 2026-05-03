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
Node* temp=head;
head=head->next;
delete temp;
for(Node* t=head;t;t=t->next) cout<<t->data<<" ";
}