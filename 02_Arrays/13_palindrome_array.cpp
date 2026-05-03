#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,2,1},flag=1;
for(int i=0;i<2;i++)
if(a[i]!=a[4-i]) flag=0;
cout<<(flag?"Yes":"No");
}