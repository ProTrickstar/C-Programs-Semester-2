#include<iostream>
using namespace std;
class Max{
public:
int find(int a,int b){return (a>b)?a:b;}
float find(float a,float b){return (a>b)?a:b;}
};
int main(){Max m; cout<<m.find(2,3)<<endl; cout<<m.find(2.5f,3.5f);}