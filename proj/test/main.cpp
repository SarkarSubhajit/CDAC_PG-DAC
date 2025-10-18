#include "PremiumUser.h"
#include "BasicUser.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if (!fin) {
        cout << "Fle not Found" << endl;
        return 1;
    }
    if (!fout) {
        cout << "File not Found" << endl;
        return 1;
    }

    string line;
    while (getline(fin, line)) {
        if (line.empty()) continue;

        stringstream ss(line);
        char choice;
        double usage;
        string code;

        ss >> choice >> usage;

        if (ss.fail() || usage < 0) {
            fout << "Invalid Input" << endl;
            continue;
        }

        User* user = nullptr;
        if (choice == 'B') {
            user = new BasicUser(usage);
        }
        else if (choice == 'P') {
            ss >> code;
            user = new PremiumUser(usage, code);
        }
        else {
            fout << "Invalid User Type" << endl;
            continue;
        }
        
        fout << user->getBill(code) << endl;
        delete user;
    }

    fin.close();
    fout.close();
    /*while(true) {
        char choice;
        double usage;
        string code;

        cout << "Press B for Basic User and P for Premium User (X for exit)" << endl;
        cin >> choice;

        if (choice == 'X')
            break;
        cout << "Enter Usage: ";
        cin >> usage;

        User* user = nullptr;
        if (choice == 'B') {
            user = new BasicUser(usage);
        }
        else if (choice == 'P') {
            cout << "Enter Discount Code if Available: ";
            cin.ignore();
            getline(cin, code);
            user = new PremiumUser(usage, code);
        }
        else {
            cout << "invalid input" << endl;
            continue;
        }

        user->display(code);

        delete user;
    }*/
    return 0;
}