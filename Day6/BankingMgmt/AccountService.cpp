#include <iostream>
#include <cstring>
#include "AccountService.h"
using namespace std;

Account *AccountService::arr[100];
int AccountService::count = 0;

Account *AccountService::acceptData(int j)
{
    // accept user data and store it to array of object
    char first[100], last[100], emailid[100];
    long mobile;
    cout << "Enter First Name : ";
    cin >> first;
    cout << "Enter Last Name : ";
    cin >> last;
    cout << "Enter Mobile No. : ";
    cin >> mobile;
    cout << "Enter Email ID : ";
    cin >> emailid;
    if (j == 1)
    {
        // for saving acc
        long long cheque;
        cout << "Enter Cheque : ";
        cin >> cheque;
        arr[count++] = new SavingAcc(first, last, mobile, emailid, cheque);
    }

    else if (j == 2)
    {
        // for current acc
        long double bal;
        cout << "Enter Average Annual Balance : ";
        cin >> bal;
        arr[count++] = new CurrentAcc(first, last, mobile, emailid, bal);
    }
    else
        cout << "Invaild Input" << endl;
    return nullptr;
}

void AccountService::displayAll()
{
    // display all elements of object array
    for (int i = 0; i < count; i++)
    {
        arr[i]->display();
        cout << "------------------" << endl;
    }
}

Account *AccountService::searchByAccount(const char *inp)
{
    // saerch for ID in array
    for (int i = 0; i < count; i++)
    {
        if (strcmp(arr[i]->getId(), inp) == 0)
        {
            return arr[i];
        }
    }
    return nullptr;
}

Account *AccountService::searchByName(const char *inp)
{
    // search for Name in array
    for (int i = 0; i < count; i++)
    {
        if (strcmp(arr[i]->getFname(), inp) == 0)
        {
            return arr[i];
        }
    }
    return nullptr;
}

void AccountService::sortById()
{
    // sort array in increasing order lexicographically
    for (int i = 0; i < count; i++)
        for (int j = 0; j < count - i - 1; j++)
        {
            if (strcmp(arr[j]->getId(), arr[j + 1]->getId()) > 0)
            {
                Account *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
}

void AccountService::displaySaving()
{
    // display all saving acc
    for (int i = 0; i < count; i++)
    {
        if (dynamic_cast<SavingAcc *>(arr[i]))
        {
            arr[i]->display();
        }
    }
}

void AccountService::displayCurrent()
{
    // display all current acc
    for (int i = 0; i < count; i++)
    {
        if (dynamic_cast<CurrentAcc *>(arr[i]))
        {
            arr[i]->display();
        }
    }
}