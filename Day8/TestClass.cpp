#include <iostream>
using namespace std;

class MyArray {
private:
    int arr[5];

public:
    // Default constructor
    MyArray() {
        for (int i = 0; i < 5; i++)
            arr[i] = 0;
    }

    // Parameterized constructor
    MyArray(int a[5]) {
        for (int i = 0; i < 5; i++)
            arr[i] = a[i];
    }

    // Overload [] operator (read only)
    int operator[](int index) const {
        if (index < 0 || index >= 5) {
            cout << "Index out of bounds!" << endl;
            return -1; 
        }
        return arr[index];
    }

    // Overload + operator
    MyArray operator+(const MyArray &other) const {
        MyArray result;
        for (int i = 0; i < 5; i++)
            result.arr[i] = arr[i] + other.arr[i];
        return result;
    }

    // Overload - operator
    MyArray operator-(const MyArray &other) const {
        MyArray result;
        for (int i = 0; i < 5; i++)
            result.arr[i] = arr[i] - other.arr[i];
        return result;
    }

    // "Transpose" (reverse the array)
    MyArray transpose() const {
        MyArray result;
        for (int i = 0; i < 5; i++)
            result.arr[i] = arr[4 - i];
        return result;
    }

    // Display array
    void display() const {
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {10, 20, 30, 40, 50};

    MyArray A(a), B(b);

    cout << "Array A: ";
    A.display();

    cout << "Array B: ";
    B.display();

    MyArray C = A + B;
    cout << "A + B: ";
    C.display();

    MyArray D = B - A;
    cout << "B - A: ";
    D.display();

    MyArray E = A.transpose();
    cout << "Transpose of A: ";
    E.display();

    cout << "A[2] = " << A[2] << endl; // 3rd element (index 2)

    return 0;
}