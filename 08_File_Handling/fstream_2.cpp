#include<fstream>
#include<iostream>
using namespace std;
int main(){
fstream f("file2.txt", ios::out);
f<<"Data 2";
f.close();
fstream f2("file2.txt", ios::in);
string s;
f2>>s;
cout<<s;
}