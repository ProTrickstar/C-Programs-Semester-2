#include<iostream>
using namespace std;
int main(){
int a[5]={2,9,1,6,3},max=a[0];
for(int i=1;i<5;i++) if(a[i]>max) max=a[i];
cout<<max;
}