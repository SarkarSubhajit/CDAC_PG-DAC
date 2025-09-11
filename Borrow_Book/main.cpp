#include "LibraryService.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    LibraryService ls;
    int choice;

    do {
        cout << "----------------------------\n";
        cout << "1. Add Member\n";
        cout << "2. Add Book\n";
        cout << "3. Borrow Book\n";
        cout << "4. Return Book\n";
        cout << "5. Show All Members with Borrowed Books\n";
        cout << "6. Show All Books\n";
        cout << "7. Exit\n";
        cout << "----------------------------\n";
        cout << "Enter your Choice : ";
        cin >> choice;
        cout << "----------------------------\n";

        switch(choice) {
            case 1: {
                LibraryService::addMember();
                break;
            }
            case 2: {
                LibraryService::addBook();
                break;
            }
            case 3: {
                int memberId, bookId;
                cout << "Enter MemberID: ";
                cin >> memberId;
                cout << "Enter BookID: ";
                cin >> bookId;
                LibraryService::borrowBooks(memberId, bookId);
                break;
            }
            case 4: {
                int memberId, bookId;
                cout << "Enter MemberID: ";
                cin >> memberId;
                cout << "Enter BookID: ";
                cin >> bookId;
                LibraryService::returnBooks(memberId, bookId);
                break;
            }
            case 5: {
                LibraryService::displayAll();
                break;
            }
            case 6: {
                LibraryService::displayBooks();
                break;
            }
        }
    }while(choice != 7);

    return 0;
}