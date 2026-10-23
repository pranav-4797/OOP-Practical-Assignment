#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    static int count;

public:
    Student(int roll, string studentName) {
        this->rollNo = roll;
        this->name = studentName;
        count++;
    }

    inline void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    static void showCount() {
        cout << "Total student objects: " << count << endl;
    }

    friend class StudentDetails;
};

int Student::count = 0;

class StudentDetails {
public:
    void show(Student s) {
        cout << "Accessing private data through friend class:" << endl;
        cout << "Roll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
    }
};

int main() {
    Student s1(101, "Aarav");
    Student s2(102, "Priya");

    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();

    cout << endl;
    Student::showCount();

    cout << endl;
    StudentDetails details;
    details.show(s1);

    return 0;
}