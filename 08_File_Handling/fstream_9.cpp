#include<fstream>
#include<iostream>
using namespace std;
int main(){
fstream f("file9.txt", ios::out);
f<<"Data 9";
f.close();
fstream f2("file9.txt", ios::in);
string s;
f2>>s;
cout<<s;
}