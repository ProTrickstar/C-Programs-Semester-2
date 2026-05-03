#include<iostream>
using namespace std;
struct Node{int data;Node* next;};
int main(){
Node* head=NULL;
for(int i=0;i<5;i++){
Node* n=new Node();
cin>>n->data;
n->next=head;
head=n;
}
Node *slow=head,*fast=head;
while(fast && fast->next){
slow=slow->next;
fast=fast->next->next;
}
cout<<slow->data;
}