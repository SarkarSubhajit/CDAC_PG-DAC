#include "StudentService.h"
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int choice;
    do
    {
        try
        {
            cout << "\n--- Student Management ---\n";
            cout << "1. Add new Student\n";
            cout << "2. Display All Student\n";
            cout << "3. Search by Id\n";
            cout << "4. Search by Name\n";
            cout << "5. Sort Students by m1 marks\n";
            cout << "6. Display All MSC Student\n";
            cout << "7. Display All PHD Student\n";
            cout << "8. Exit\n";
            cout << "--------------------" << endl;
            cout << "Enter your Choice : ";

            if (!(cin >> choice))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw runtime_error("Input Must be a Number in the List");
            }
            switch (choice)
            {
            case 1:
            {
                int j;
                cout << "1. MSc Student" << endl;
                cout << "2. PhD Student" << endl;
                cout << "Type : ";
                if (!(cin >> j))
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    throw runtime_error("Invalid Student Type Selected");
                }
                if (j != 1 && j != 2)
                {
                    throw runtime_error("Invalid Menu Option");
                }
                Student *ob = StudentService::acceptData(j);
                break;
            }
            case 2:
            {
                StudentService::displayAll();
                break;
            }
            case 3:
            {
                cout << "Enter ID to Search : ";
                int id;
                if (!(cin >> id))
                {
                    throw runtime_error("ID must be a Number");
                }
                StudentService::searchById(id);
                break;
            }
            case 4:
            {
                cout << "Enter Name to Search : ";
                char name[100];
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.getline(name, 100);
                StudentService::searchByName(name);
                break;
            }
            case 5:
            {
                StudentService::sortByM1();
                cout << "Sorted by M1 Marks..." << endl;
                break;
            }
            case 6:
            {
                StudentService::displayMsc();
                break;
            }
            case 7:
            {
                StudentService::displayPhd();
                break;
            }
            case 8:
            {
                cout << "Thanks for Visiting" << endl;
                break;
            }
            default:
            {
                throw runtime_error("Invalid Menu Choice");
                break;
            }
            }
        }
        catch (const exception& e)
        {
            cout << "Error : " << e.what() << endl;
        }

    } while (choice != 8);
    return 0;
}