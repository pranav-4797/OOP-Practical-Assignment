#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of a general shape" << endl;
    }
};

class Rectangle : public Shape {
private:
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape *ptr;

    Rectangle r(10, 5);
    Circle c(7);

    cout << "RUNTIME POLYMORPHISM" << endl;

    ptr = &r;
    ptr->area();

    ptr = &c;
    ptr->area();

    return 0;
}