#include<iostream>
using namespace std;
class A{public:void a(){cout<<"A";}};
class B:public A{public:void b(){cout<<"B";}};
int main(){B obj; obj.a(); obj.b();}