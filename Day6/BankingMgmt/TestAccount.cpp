#include <iostream>
#include "AccountService.h"
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n--- Account Management ---\n";
        cout << "1. Add new account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Search by Account Number\n";
        cout << "4. Search by Name\n";
        cout << "5. Sort Accounts by ID\n";
        cout << "6. Display All Saving Account\n";
        cout << "7. Display All Current Account\n";
        cout << "8. Exit\n";
        cout << "Enter your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int j;
            cout << "1. Saving Account" << endl;
            cout << "2. Current Account" << endl;
            cin >> j;
            Account *ob = AccountService::acceptData(j);
            break;
        }
        case 2:
            AccountService::displayAll();
            break;
        case 3:
        {
            char inp[7];
            cout << "Enter Account ID to Search : " << endl;
            cin >> inp;
            Account *ob1 = AccountService::searchByAccount(inp);
            if (ob1)
                ob1->display();
            else
                cout << "not Found" << endl;
            break;
        }
        case 4:
        {
            char inp[100];
            cout << "Enter First Name to Search : " << endl;
            cin >> inp;
            Account *ob2 = AccountService::searchByName(inp);
            if (ob2)
                ob2->display();
            else
                cout << "not found" << endl;
            break;
        }
        case 5:
        {
            AccountService::sortById();
            cout << "Sorted by ID" << endl;
            break;
        }
        case 6:
        {
            cout << "All Saving Accounts : " << endl;
            AccountService::displaySaving();
            break;
        }
        case 7:
        {
            cout << "All Current Accounts : " << endl;
            AccountService::displayCurrent();
            break;
        }
        case 8:
        {
            cout << "Thank you for Visiting.." << endl;
            break;
        }
        default:
            cout << "Invalid Input" << endl;
        }
    } while (choice != 8);
}
