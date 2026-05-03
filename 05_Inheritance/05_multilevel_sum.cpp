#include<iostream>
using namespace std;
class A{protected:int a,b; public:void get(){cin>>a>>b;}};
class B:public A{public:int sum(){return a+b;}};
class C:public B{public:void show(){cout<<sum();}};
int main(){C obj; obj.get(); obj.show();}