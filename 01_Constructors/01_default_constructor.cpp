#include<iostream>
using namespace std;
class A { int x; public: A(){x=0;} int get(){return x;} };
int main(){ A a; cout<<a.get(); }