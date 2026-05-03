#include<iostream>
using namespace std;
class Num{
int x;
public:
Num(int a){x=a;}
void operator++(){x++;}
void show(){cout<<x;}
};
int main(){Num n(5); ++n; n.show();}