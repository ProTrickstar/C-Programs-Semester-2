#include<iostream>
using namespace std;
class Test{
public:
void add(int a,int b){cout<<a+b;}
};
int main(){Test t; t.add(2,3);}