#include<fstream>
#include<iostream>
using namespace std;
int main(){
ifstream f("file9.txt");
string s;
f>>s;
cout<<s;
}