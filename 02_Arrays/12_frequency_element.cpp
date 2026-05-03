#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,2,3,2},key=2,c=0;
for(int i=0;i<5;i++) if(a[i]==key) c++;
cout<<c;
}