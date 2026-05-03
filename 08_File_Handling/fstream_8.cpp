#include<fstream>
#include<iostream>
using namespace std;
int main(){
fstream f("file8.txt", ios::out);
f<<"Data 8";
f.close();
fstream f2("file8.txt", ios::in);
string s;
f2>>s;
cout<<s;
}