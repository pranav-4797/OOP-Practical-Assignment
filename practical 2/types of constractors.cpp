#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    char name[50];

public:
    Student()
    {
        rollNo = 0;
        name[0] = '\0';
    }

    Student(int r, const char n[])
    {
        rollNo = r;
        int i = 0;
        while (n[i] != '\0')
        {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';
    }

    Student(const Student &s)
    {
        rollNo = s.rollNo;
        int i = 0;
        while (s.name[i] != '\0')
        {
            name[i] = s.name[i];
            i++;
        }
        name[i] = '\0';
    }

    void setData(int r, const char n[])
    {
        rollNo = r;
        int i = 0;
        while (n[i] != '\0')
        {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    void changeName(const char n[])
    {
        int i = 0;
        while (n[i] != '\0')
        {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';
    }
};

int main()
{
    cout << "----- DEFAULT CONSTRUCTOR -----" << endl;
    Student s1;
    s1.display();

    cout << "\n----- PARAMETERIZED CONSTRUCTOR -----" << endl;
    Student s2(101, "Pranav Chopade");
    s2.display();

    cout << "\n----- COPY CONSTRUCTOR -----" << endl;
    Student s3(s2);
    s3.display();

    cout << "\n----- MEMBER FUNCTION -----" << endl;
    s1.setData(102, "Rahul Patil");
    s1.display();

    cout << "\n----- MEMBER FUNCTION AFTER CHANGE -----" << endl;
    s1.changeName("Amit Sharma");
    s1.display();

    return 0;
}

