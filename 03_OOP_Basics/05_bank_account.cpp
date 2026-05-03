#include<iostream>
using namespace std;
class Bank{
double bal;
public:
Bank(double b){bal=b;}
void deposit(double a){bal+=a;}
void show(){cout<<bal;}
};
int main(){Bank b(1000); b.deposit(500); b.show();}