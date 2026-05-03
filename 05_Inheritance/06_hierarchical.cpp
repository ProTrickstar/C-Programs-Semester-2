#include<iostream>
using namespace std;
class Base{public:void show(){cout<<"Base ";}};
class A:public Base{public:void a(){cout<<"A ";}};
class B:public Base{public:void b(){cout<<"B";}};
int main(){A x; B y; x.show(); x.a(); y.show(); y.b();}