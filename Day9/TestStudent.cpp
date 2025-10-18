#include <iostream>
#include "StudentService.h"
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n---- Student Menu ----\n";
        cout << "1. Add Student\n2. Display All\n3. Search by Roll\n4. Display by City\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: StudentService::addStudent(); break;
            case 2: StudentService::displayAll(); break;
            case 3: {
                int roll;
                cout << "Enter Roll: ";
                cin >> roll;
                StudentService::searchByRoll(roll);
                break;
            }
            case 4: {
                string city;
                cout << "Enter City: ";
                cin.ignore();
                getline(cin, city);
                StudentService::displayByCity(city);
                break;
            }
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}