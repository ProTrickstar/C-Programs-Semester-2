#include<iostream>
using namespace std;
class B { int y; public:B(int a){y=a;} int get(){return y;} };
int main(){ B b(9); cout<<b.get(); }