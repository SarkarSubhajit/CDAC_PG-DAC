#include <iostream>
using namespace std;
// #include "Employee.h"
#include "MScStudent.h"
#include "PhDStudent.h"

int main()
{
    Student obj1(12, "Bob", "Pune", 23, 34, 45);
    obj1.display();
    cout << "-------------------------------------------------------------------------" << endl;

    MScStudent obj2(34, "Alice", "Delhi", 56, 67, 78, 90, 98);
    obj2.display();
    cout << "-------------------------------------------------------------------------" << endl;

    PhDStudent obj3(2, "Gary", "Bangalore", 4, 25, 18, "Erosion", 25);
    obj3.display();
    cout << "-------------------------------------------------------------------------" << endl;
    return 0;
}