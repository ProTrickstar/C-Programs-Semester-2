#include<fstream>
#include<iostream>
using namespace std;
int main(){
fstream f("file5.txt", ios::out);
f<<"Data 5";
f.close();
fstream f2("file5.txt", ios::in);
string s;
f2>>s;
cout<<s;
}