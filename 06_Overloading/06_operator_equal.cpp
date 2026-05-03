#include<iostream>
using namespace std;
class Num{
int x;
public:
Num(int a){x=a;}
bool operator==(Num n){return x==n.x;}
};
int main(){Num n1(5),n2(5); if(n1==n2) cout<<"Equal";}