#include<iostream>
using namespace std;
class Inventory{
int arr[10],n;
public:
Inventory(){n=3; arr[0]=1;arr[1]=2;arr[2]=3;}
void del(){
for(int i=0;i<n-1;i++) arr[i]=arr[i+1];
n--;
}
void display(){for(int i=0;i<n;i++) cout<<arr[i]<<" ";}
};
int main(){Inventory i; i.del(); i.display();}