#include "PersonService.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    PersonService p;
    int choice;

    do {
        cout << "-------------------\n";
        cout << "1. Add Player\n";
        cout << "2. Add Sports\n";
        cout << "3. Enroll Sports\n";
        cout << "4. Show all Sports of a Player\n";
        cout << "5. Show all Players with Sports\n";
        cout << "6. Show all Players in a Sport\n";
        cout << "7. Exit\n";
        cout << "-------------------\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << "-------------------\n";

        switch(choice) {
            case 1:
                PersonService::addPlayer();
                break;
            case 2:
                PersonService::addSports();
                break;
            case 3:
                PersonService::enrollPlayer();
                break;
            case 4: {
                string name;
                cout << "Enter Name to Search: ";
                cin.ignore();
                getline(cin, name);
                PersonService::displaySports(name);
                break;
            }
            case 5:
                PersonService::displayAll();
                break;
            case 6: {
                string name;
                cout << "Enter Name to Search: ";
                cin.ignore();
                getline(cin, name);
                PersonService::displayPlayers(name);
                break;
            }
            case 7: {
                cout << "Thanks for Visiting\n";
                break;
            }
        }
    } while (choice != 7);

    return 0;
}