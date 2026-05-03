#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> undoS,redoS;
undoS.push(1);
undoS.push(2);
redoS.push(undoS.top());
undoS.pop();
cout<<redoS.top();
}