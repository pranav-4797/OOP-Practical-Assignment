#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    Student(string n, int r)
    {
        name = n;
        rollNo = r;
        cout << "Constructor called." << endl;
    }

    void display()
    {
        cout << "Student Name : " << name << endl;
        cout << "Roll Number  : " << rollNo << endl;
    }

    void welcome()
    {
        cout << "Welcome, " << name << "!" << endl;
    }

    ~Student()
    {
        cout << " Object destroyed." << endl;
    }
};

int main()
{
    Student s1("Krishna", 25);

    cout << "\nStudent Details:" << endl;
    s1.display();
    s1.welcome();

    return 0;
}
