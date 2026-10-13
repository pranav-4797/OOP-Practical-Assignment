#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter number of elements: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size. Enter a positive number." << endl;
        return 0;
    }

    int* arr = new int[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "\nArray elements using pointer notation:" << endl;
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    int& firstElement = arr[0];
    cout << "First element using reference: " << firstElement << endl;
    cout << "Sum of elements: " << sum << endl;

    delete[] arr;
    arr = nullptr;

    cout << "Dynamic memory released successfully." << endl;
    return 0;
}