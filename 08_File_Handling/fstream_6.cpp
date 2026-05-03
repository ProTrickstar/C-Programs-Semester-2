#include<fstream>
#include<iostream>
using namespace std;
int main(){
fstream f("file6.txt", ios::out);
f<<"Data 6";
f.close();
fstream f2("file6.txt", ios::in);
string s;
f2>>s;
cout<<s;
}