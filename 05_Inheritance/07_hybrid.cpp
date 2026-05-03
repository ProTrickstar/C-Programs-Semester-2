#include<iostream>
using namespace std;
class A{protected:int a,b; public:void get(){cin>>a>>b;}};
class B:virtual public A{};
class C:virtual public A{};
class D:public B,public C{public:void show(){cout<<a+b;}};
int main(){D obj; obj.get(); obj.show();}