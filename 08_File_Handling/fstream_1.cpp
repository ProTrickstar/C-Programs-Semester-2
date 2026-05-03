#include<fstream>
#include<iostream>
using namespace std;
int main(){
fstream f("file1.txt", ios::out);
f<<"Data 1";
f.close();
fstream f2("file1.txt", ios::in);
string s;
f2>>s;
cout<<s;
}