#include <iostream>
#include "PersonService.cpp"
using namespace std;

// define static members
Person PersonService::Student[100];
int PersonService::count = 0;

int main() {
    int choice;
    do {
        cout << "1. Add person" << endl;
        cout << "2. Search by id" << endl;
        cout << "3. Display all" << endl;
        cout << "4. Search by name" << endl;
        cout << "5. Sort by id" << endl;
        cout << "6. Sort by name" << endl;
        cout << "7. Sort by M1 Marks" << endl;
        cout << "8. Show GPA" << endl;
        cout << "9. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Person p = PersonService::acceptData();
                PersonService::addPerson(p);
                break;
            }
            case 2: {
                int id;
                cout << "Enter ID for search: ";
                cin >> id;
                Person* p1 = PersonService::searchById(id);
                if (p1) p1->display();
                else cout << "Student not found!" << endl;
                break;
            }
            case 3:
                PersonService::displayAll();
                break;
            case 4: {
                char name[100];
                cout << "Enter name for search: ";
                cin.ignore();
                cin.getline(name, 100);
                PersonService::searchByName(name);
                break;
            }
            case 5:
                PersonService::sortById();
                break;
            case 6:
                PersonService::sortByName();
                break;
            case 7:
                PersonService::sortByM1();
                break;
            case 8:
                PersonService::showGPA();
                break;
            case 9:
                cout << "Thank you for visiting..." << endl;
                return 0;
            default:
                cout << "Invalid Input!" << endl;
        }
    } while (choice != 9);

    return 0;
}
