#include <iostream>
using namespace std;

template <class T>
class Calculator {
private:
    T a, b;

public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    T add() {
        return a + b;
    }

    T multiply() {
        return a * b;
    }

    void display() {
        cout << "First value: " << a << endl;
        cout << "Second value: " << b << endl;
        cout << "Sum: " << add() << endl;
        cout << "Product: " << multiply() << endl;
    }
};

template <typename T>
T findMaximum(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << "CLASS TEMPLATE" << endl;
    Calculator<int> intCalc(10, 5);
    intCalc.display();

    cout << "\nFUNCTION TEMPLATE" << endl;
    cout << "Maximum of 12 and 20: " << findMaximum(12, 20) << endl;
    cout << "Maximum of 4.5 and 2.8: " << findMaximum(4.5, 2.8) << endl;

    return 0;
}