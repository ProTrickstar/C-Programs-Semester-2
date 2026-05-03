#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// Base Class
class Person {
protected:
    string name;
};

// Student Class (Encapsulation)
class Student : public Person {
private:
    int id;
    int marks;

public:
    // Constructor
    Student(int i = 0, string n = "", int m = 0) {
        id = i;
        name = n;
        marks = m;
    }

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nID: " << id
             << "\nName: " << name
             << "\nMarks: " << marks << endl;
    }

    int getId() { return id; }
    int getMarks() { return marks; }

    // File write
    void writeToFile(ofstream &f) {
        f << id << " " << name << " " << marks << endl;
    }

    // File read
    void readFromFile(ifstream &f) {
        f >> id >> name >> marks;
    }
};

// Derived Class
class Result : public Student {
public:
    void showGrade() {
        int m = getMarks();
        if (m >= 90) cout << "Grade: A\n";
        else if (m >= 75) cout << "Grade: B\n";
        else if (m >= 60) cout << "Grade: C\n";
        else cout << "Grade: D\n";
    }
};

// MAIN SYSTEM
int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n===== STUDENT MANAGER =====\n";
        cout << "1. Add Student\n";
        cout << "2. View All\n";
        cout << "3. Search\n";
        cout << "4. Save to File\n";
        cout << "5. Load from File\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            s.input();
            students.push_back(s);
        }

        else if (choice == 2) {
            for (auto &s : students) {
                s.display();
                Result r;
                r = *(Result*)&s;
                r.showGrade();
            }
        }

        else if (choice == 3) {
            int id;
            cout << "Enter ID: ";
            cin >> id;
            for (auto &s : students) {
                if (s.getId() == id) {
                    s.display();
                }
            }
        }

        else if (choice == 4) {
            ofstream f("students.txt");
            for (auto &s : students) {
                s.writeToFile(f);
            }
            f.close();
            cout << "Saved!\n";
        }

        else if (choice == 5) {
            ifstream f("students.txt");
            Student s;
            while (f >> ws && !f.eof()) {
                s.readFromFile(f);
                students.push_back(s);
            }
            f.close();
            cout << "Loaded!\n";
        }

    } while (choice != 6);

    return 0;
}