#include<iostream>
using namespace std;
class B { private:int y; public:B(){y=10;} int get(){return y;} };
int main(){ B b; cout<<b.get(); }