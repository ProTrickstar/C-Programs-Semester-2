#include<iostream>
using namespace std;
class Shape{protected:int l,b;};
class Rect:public Shape{
public:void input(){cin>>l>>b;}
void area(){cout<<l*b;}
};
int main(){Rect r; r.input(); r.area();}