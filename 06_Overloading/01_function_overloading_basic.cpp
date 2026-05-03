#include<iostream>
using namespace std;
class Test{
public:
void add(int a){cout<<a+10;}
void add(double b){cout<<b+10.1;}
};
int main(){Test t; t.add(5); cout<<endl; t.add(5.5);}