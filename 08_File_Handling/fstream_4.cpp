#include<fstream>
#include<iostream>
using namespace std;
int main(){
fstream f("file4.txt", ios::out);
f<<"Data 4";
f.close();
fstream f2("file4.txt", ios::in);
string s;
f2>>s;
cout<<s;
}