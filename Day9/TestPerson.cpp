#include <iostream>
#include "PersonService.h"
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n---- Menu ----\n";
        cout << "1. Add Person\n2. Display All\n3. Search by ID\n4. Search by Name\n";
        cout << "5. Modify Address\n6. Find Address by ID\n7. Display by City\n8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: PersonService::addPerson(); break;
            case 2: PersonService::displayAll(); break;
            case 3: {
                int id; cout << "Enter ID: "; cin >> id;
                Person* p = PersonService::searchById(id);
                if (p) p->display(); else cout << "Not found!\n";
                break;
            }
            case 4: {
                string name; cout << "Enter Name: "; cin.ignore(); getline(cin, name);
                Person* p = PersonService::searchByName(name);
                if (p) p->display(); else cout << "Not found!\n";
                break;
            }
            case 5: {
                int id; cout << "Enter ID to modify address: "; cin >> id;
                PersonService::modifyAddress(id);
                break;
            }
            case 6: {
                int id; cout << "Enter ID: "; cin >> id;
                PersonService::findAddrById(id);
                break;
            }
            case 7: {
                string city; cout << "Enter City: "; cin.ignore(); getline(cin, city);
                PersonService::findByCity(city);
                break;
            }
            case 8: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 8);

    PersonService::cleanup(); // free memory
    return 0;
}