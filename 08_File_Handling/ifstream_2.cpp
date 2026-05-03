#include<fstream>
#include<iostream>
using namespace std;
int main(){
ifstream f("file2.txt");
string s;
f>>s;
cout<<s;
}