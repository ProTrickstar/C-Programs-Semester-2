#include<iostream>
using namespace std;
class Inventory{
int arr[10],n;
public:
Inventory(){n=0;}
void add(int x){arr[n++]=x;}
void display(){for(int i=0;i<n;i++) cout<<arr[i]<<" ";}
};
int main(){Inventory i; i.add(1); i.add(2); i.display();}