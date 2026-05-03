#include<iostream>
using namespace std;
class A { int x; public: A(int a){x=a;} A(A &o){x=o.x;} int get(){return x;} };
int main(){ A a1(5); A a2=a1; cout<<a2.get(); }