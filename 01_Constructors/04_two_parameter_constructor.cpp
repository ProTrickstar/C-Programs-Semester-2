#include<iostream>
using namespace std;
class A { int x; public: A(int a,int b){x=a+b;} int get(){return x;} };
int main(){ A a(2,3); cout<<a.get(); }