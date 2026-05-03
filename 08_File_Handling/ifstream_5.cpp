#include<fstream>
#include<iostream>
using namespace std;
int main(){
ifstream f("file5.txt");
string s;
f>>s;
cout<<s;
}