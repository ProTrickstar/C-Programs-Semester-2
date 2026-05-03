#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<string> s;
s.push("Hello");
s.push("World");
s.pop();
cout<<s.top();
}