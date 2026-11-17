#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Part A: List
    list<int> l;
    l.push_back(30);
    l.push_back(10);
    l.push_back(20);

    cout << "List: ";
    for (int x : l)
        cout << x << " ";

    l.sort();

    cout << "\nSorted List: ";
    for (int x : l)
        cout << x << " ";

    l.remove(20);

    cout << "\nAfter Removing 20: ";
    for (int x : l)
        cout << x << " ";

    // Part B: Vector
    vector<int> v;
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);

    cout << "\n\nVector: ";
    for (int x : v)
        cout << x << " ";

    v.insert(v.begin() + 1, 10);

    cout << "\nAfter Insertion: ";
    for (int x : v)
        cout << x << " ";

    sort(v.begin(), v.end());

    cout << "\nSorted Vector: ";
    for (int x : v)
        cout << x << " ";

    v.erase(v.begin());

    cout << "\nAfter Erasing First Element: ";
    for (int x : v)
        cout << x << " ";

    return 0;
}
