#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    // Default constructor
    Number()
    {
        value = 0;
    }

    // Parameterized constructor
    Number(int v)
    {
        value = v;
    }

    // Overloading + operator
    Number operator+(Number n)
    {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }

  
    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    
    Number n1;

    
    Number n2(10);
    Number n3(20);

    cout << "Default Constructor:" << endl;
    n1.display();

    cout << "\nParameterized Constructors:" << endl;
    n2.display();
    n3.display();

   
    Number n4 = n2 + n3;

    cout << "\nAfter Operator Overloading (n2 + n3):" << endl;
    n4.display();

    return 0;
}
