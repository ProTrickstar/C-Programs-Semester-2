#include<iostream>
using namespace std;
class Test{
public:int x,y;
void calc(){cin>>x>>y; cout<<x+y;}
};
int main(){Test t; t.calc();}