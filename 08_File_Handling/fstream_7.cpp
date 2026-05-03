#include<fstream>
#include<iostream>
using namespace std;
int main(){
fstream f("file7.txt", ios::out);
f<<"Data 7";
f.close();
fstream f2("file7.txt", ios::in);
string s;
f2>>s;
cout<<s;
}