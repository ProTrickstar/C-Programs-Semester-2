#include<fstream>
#include<iostream>
using namespace std;
int main(){
fstream f("file10.txt", ios::out);
f<<"Data 10";
f.close();
fstream f2("file10.txt", ios::in);
string s;
f2>>s;
cout<<s;
}