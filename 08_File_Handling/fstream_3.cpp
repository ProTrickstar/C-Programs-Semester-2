#include<fstream>
#include<iostream>
using namespace std;
int main(){
fstream f("file3.txt", ios::out);
f<<"Data 3";
f.close();
fstream f2("file3.txt", ios::in);
string s;
f2>>s;
cout<<s;
}