#include<iostream>
using namespace std;
class Student{
int id; string name;
public:
Student(int i,string n){id=i;name=n;}
void display(){cout<<id<<" "<<name;}
};
int main(){Student s(1,"Navya"); s.display();}