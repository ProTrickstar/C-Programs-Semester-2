#include<iostream>
using namespace std;
class Bank{
protected:double bal;
public:Bank(double b){bal=b;}
};
class Saving:public Bank{
public:Saving(double b):Bank(b){}
void add(){bal+=100;}
void show(){cout<<bal;}
};
int main(){Saving s(1000); s.add(); s.show();}