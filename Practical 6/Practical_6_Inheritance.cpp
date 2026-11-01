#include <iostream>
using namespace std;

// Single inheritance
class Person {
public:
    void showPerson() { cout << "Person class: Basic details" << endl; }
};
class Student : public Person {
public:
    void showStudent() { cout << "Student class: Single inheritance" << endl; }
};

// Multilevel inheritance
class Animal {
public:
    void eat() { cout << "Animal can eat" << endl; }
};
class Mammal : public Animal {
public:
    void walk() { cout << "Mammal can walk" << endl; }
};
class Dog : public Mammal {
public:
    void bark() { cout << "Dog can bark" << endl; }
};

// Multiple inheritance
class Academic {
public:
    void study() { cout << "Academic activities" << endl; }
};
class Sports {
public:
    void play() { cout << "Sports activities" << endl; }
};
class AllRounder : public Academic, public Sports {
public:
    void showAllRounder() { cout << "Multiple inheritance demonstrated" << endl; }
};

// Hierarchical inheritance
class Shape {
public:
    void showShape() { cout << "Shape is the base class" << endl; }
};
class Circle : public Shape {
public:
    void drawCircle() { cout << "Circle is derived from Shape" << endl; }
};
class Rectangle : public Shape {
public:
    void drawRectangle() { cout << "Rectangle is derived from Shape" << endl; }
};

int main() {
    cout << "SINGLE INHERITANCE" << endl;
    Student s;
    s.showPerson();
    s.showStudent();

    cout << "\nMULTILEVEL INHERITANCE" << endl;
    Dog d;
    d.eat();
    d.walk();
    d.bark();

    cout << "\nMULTIPLE INHERITANCE" << endl;
    AllRounder a;
    a.study();
    a.play();
    a.showAllRounder();

    cout << "\nHIERARCHICAL INHERITANCE" << endl;
    Circle c;
    Rectangle r;
    c.showShape();
    c.drawCircle();
    r.showShape();
    r.drawRectangle();

    return 0;
}