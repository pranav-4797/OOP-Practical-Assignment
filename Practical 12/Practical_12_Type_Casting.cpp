#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    // Implicit and explicit type casting
    int a = 10;
    double b = a;
    cout << "Implicit casting: " << b << endl;

    double x = 12.75;
    int y = static_cast<int>(x);
    cout << "static_cast: " << y << endl;

    // dynamic_cast
    Base *ptr = new Derived();
    Derived *dptr = dynamic_cast<Derived*>(ptr);

    if (dptr != NULL)
        cout << "dynamic_cast: Successful" << endl;

    // const_cast
    int value = 20;
    const int *cptr = &value;
    int *newptr = const_cast<int*>(cptr);
    *newptr = 30;
    cout << "const_cast: " << value << endl;

    // reinterpret_cast
    int num = 50;
    int *iptr = &num;
    char *c = reinterpret_cast<char*>(iptr);
    cout << "reinterpret_cast: Address converted" << endl;

    delete ptr;
    return 0;
}
