#include<iostream>
using namespace std;
class Num{
int x;
public:
Num(int a){x=a;}
Num operator*(Num n){return Num(x*n.x);}
void show(){cout<<x;}
};
int main(){Num n1(3),n2(4); Num n3=n1*n2; n3.show();}