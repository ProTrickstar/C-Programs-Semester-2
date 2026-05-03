#include<iostream>
using namespace std;
class A{public:void a(){cout<<"A ";}};
class B{public:void b(){cout<<"B";}};
class C:public A,public B{};
int main(){C obj; obj.a(); obj.b();}