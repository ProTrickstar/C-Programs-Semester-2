#include<iostream>
using namespace std;
struct Node{int data;Node* next;};
int main(){
Node* head=NULL; int sum=0;
for(int i=0;i<3;i++){
Node* n=new Node();
cin>>n->data;
n->next=head;
head=n;
}
for(Node* t=head;t;t=t->next) sum+=t->data;
cout<<sum;
}