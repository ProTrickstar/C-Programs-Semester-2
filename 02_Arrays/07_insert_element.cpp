#include<iostream>
using namespace std;
int main(){
int a[6]={1,2,3,4,5},pos=2,val=9;
for(int i=5;i>pos;i--) a[i]=a[i-1];
a[pos]=val;
for(int i=0;i<6;i++) cout<<a[i]<<" ";
}