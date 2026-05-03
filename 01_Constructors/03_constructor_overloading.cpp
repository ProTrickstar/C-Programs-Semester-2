#include<iostream>
using namespace std;
class A { int x; public: A(){x=1;} A(int a){x=a;} int get(){return x;} };
int main(){ A a1,a2(5); cout<<a1.get()<<" "<<a2.get(); }