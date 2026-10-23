#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter numerator: ";
    cin >> a;
    cout << "Enter denominator: ";
    cin >> b;

    try {
        if (b == 0) {
            throw "Division by zero is not allowed.";
        }

        if (a < 0) {
            throw a;
        }

        cout << "Result: " << a / b << endl;
    }
    catch (const char* message) {
        cout << "String exception: " << message << endl;
    }
    catch (int value) {
        cout << "Integer exception: numerator cannot be negative ("
             << value << ")." << endl;
    }
    catch (...) {
        cout << "Unknown exception occurred." << endl;
    }

    cout << "Program continues after exception handling." << endl;
    return 0;
}