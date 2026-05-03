#include<iostream>
using namespace std;
class Student{
int id;
public:
Student(int i){id=i;}
Student(const Student &s){id=s.id;}
void show(){cout<<id;}
};
int main(){Student s1(10); Student s2=s1; s2.show();}