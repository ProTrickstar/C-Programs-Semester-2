#include<iostream>
using namespace std;
class Inventory{
int arr[5],n;
public:
void input(){n=5; for(int i=0;i<n;i++) cin>>arr[i];}
void display(){for(int i=0;i<n;i++) cout<<arr[i]<<" ";}
};
int main(){Inventory i; i.input(); i.display();}