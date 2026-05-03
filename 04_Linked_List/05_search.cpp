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
int key; cin>>key;
for(Node* t=head;t;t=t->next){
if(t->data==key){cout<<"Found"; return 0;}
}
cout<<"Not Found";
}