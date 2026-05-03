#include<iostream>
using namespace std;
class A { int x; public: A(int a){x=a;} int get(){return x;} };
int main(){ A a(5); cout<<a.get(); }