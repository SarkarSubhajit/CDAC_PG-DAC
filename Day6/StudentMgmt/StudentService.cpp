#include "StudentService.h"
#include <iostream>
#include <cstring>
using namespace std;

Student *StudentService::arr[100];
int StudentService::count = 0;

Student *StudentService::acceptData(int a)
{
    int id, m1, m2, m3;
    char name[100], addr[100];
    cout << "Enter ID : ";
    if (!(cin >> id))
    {
        cin.clear();
        cin.ignore();
        throw runtime_error("ID must be a Number");
    }
    cout << "Enter Name : ";
    cin.ignore();
    cin.getline(name, 100);
    cout << "Enter Address : ";
    cin.getline(addr, 100);
    cout << "Enter M1 : ";
    if (!(cin >> m1))
    {
        cin.clear();
        cin.ignore();
        throw runtime_error("M1 must be a Number");
    }
    cout << "Enter M2 : ";
    if (!(cin >> m2))
    {
        cin.clear();
        cin.ignore();
        throw runtime_error("M2 must be a Number");
    }
    cout << "Enter M3 : ";
    if (!(cin >> m3))
    {
        cin.clear();
        cin.ignore();
        throw runtime_error("M3 must be a Number");
    }

    if (a == 1)
    {
        int spmarks, lnmarks;
        cout << "Enter Special SUbject Marks : ";
        cin >> spmarks;
        cout << "Enter Language Marks : ";
        cin >> lnmarks;
        arr[count] = new MScStudent(id, name, addr, m1, m2, m3, spmarks, lnmarks);
        return arr[count++];
    }

    else if (a == 2)
    {
        char thesis[100];
        int thmarks;
        cout << "Enter Thesis Name : ";
        cin.ignore();
        cin.getline(thesis, 100);
        cout << "Enter Thesis Marks : ";
        if (!(cin >> thmarks))
        {
            cin.clear();
            cin.ignore();
            throw runtime_error("Thesis Marks must be a Number");
        }
        arr[count] = new PhDStudent(id, name, addr, m1, m2, m3, thesis, thmarks);
        return arr[count++];
    }

    else
    {
        cout << "Invalid Input" << endl;
    }
    return nullptr;
}

void StudentService::displayAll()
{
    for (int i = 0; i < count; i++)
    {
        arr[i]->display();
    }
}

void StudentService::searchById(int inp)
{
    int flag = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i]->getId() == inp)
            arr[i]->display();
        else
            flag = 1;
    }
    if (flag == 1)
        cout << "ID not Found" << endl;
}

void StudentService::searchByName(const char *inp)
{
    int flag = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(arr[i]->getName(), inp) == 0)
            arr[i]->display();
        else
            flag = 1;
    }
    if (flag == 1)
        cout << "Name not Found" << endl;
}

void StudentService::sortByM1()
{
    for (int i = 0; i < count - 1; i++)
        for (int j = 0; j < count - i - 1; j++)
        {
            if (arr[j]->getM1() > arr[j + 1]->getM1())
            {
                Student *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
}

void StudentService::displayMsc()
{
    for (int i = 0; i < count; i++)
    {
        if (dynamic_cast<MScStudent *>(arr[i]))
            arr[i]->display();
    }
}

void StudentService::displayPhd()
{
    for (int i = 0; i < count; i++)
    {
        if (dynamic_cast<PhDStudent *>(arr[i]))
            arr[i]->display();
    }
}