#include "PersonService.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    PersonService p;
    int choice;
    do {
        cout << "-----------------------------" << endl;
        cout << "1. Add Seller\n";
        cout << "2. Add Product\n";
        cout << "3. Show All Sellers with Products\n";
        cout << "4. Show All Sellers Only\n";
        cout << "5. Show All Products Only";
        cout << "6. Save Data in a File\n";
        cout << "7. Load Data from a File\n";
        cout << "8. EXIT\n";
        cout << "-----------------------------" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        cout << "-----------------------------" << endl;

        switch(choice) {
            case 1: {
                PersonService::addSeller();
                break;
            }
            case 2: {
                int id;
                cout << "Enter Seller ID to add Products : ";
                cin >> id;
                PersonService::addProduct(id);
                break;
            }
            case 3: {
                PersonService::displayAll();
                break;
            }
            case 4: {
                PersonService::displaySeller();
                break;
            }
            case 5: {
                PersonService::displayProduct();
                break;
            }
            case 6: {

            }
            case 7: {

            }
            default: {
                cout << "Thank You for Visiting" << endl;
            }
        }
    } while (choice != 8);
    return 0;
}