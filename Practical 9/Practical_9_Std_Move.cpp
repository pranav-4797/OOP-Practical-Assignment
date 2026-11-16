#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    string source = "C++ Move Semantics";

    cout << "Before move:" << endl;
    cout << "Source string: " << source << endl;

    string destination = std::move(source);

    cout << "\nAfter std::move:" << endl;
    cout << "Destination string: " << destination << endl;
    cout << "Source string size: " << source.size() << endl;

    // A moved-from object remains valid, but its value is unspecified.
    source = "Source is reusable";
    cout << "\nAfter reusing source:" << endl;
    cout << "Source string: " << source << endl;

    string first = "Move assignment example";
    string second = "Temporary text";

    second = std::move(first);

    cout << "\nMove assignment:" << endl;
    cout << "Second string: " << second << endl;

    return 0;
}
