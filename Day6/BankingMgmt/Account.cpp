#include <iostream>
#include <cstring>
#include "Account.h"
using namespace std;

// static member inititation
int Account::count = 0;

// constructors
Account::Account() {
    fname = nullptr;
    lname = nullptr;
    mobile = 0;
    email = nullptr;
    id = nullptr;
    mycount = ++count;
}

Account::Account(const char* fnm, const char* lnm, long mb, const char* em) {
    fname = new char[strlen(fnm) + 1];
    strcpy(fname, fnm);
    lname = new char[strlen(lnm) + 1];
    strcpy(lname, lnm);
    mobile = mb;
    email = new char[strlen(em) + 1];
    strcpy(email, em);

    mycount = ++count;
    id = nullptr;
    generateId();
}

Account::~Account() {
    delete[] fname;
    delete[] lname;
    delete[] email;
    delete[] id;
}

void Account::generateId() {
    char str[7];
    int k=0;
    for (int i = 0; i < 3; i++) {
        if (fname[i] != '\0')
            str[k++] = toupper(fname[i]);
    }
    for (int j = 0; j < 3; j++) {
        if (lname[j] != '\0')
            str[k++] = toupper(lname[j]);
    }

    str[k] = '\0';

    char num[12];
    sprintf(num, "%d", mycount);

    delete[] id;
    id = new char[strlen(str) + strlen(num) + 1];
    strcpy(id, str);
    strcat(id, num);
}

// SETTERS
void Account::setFname(const char* fnm) {
    delete[] fname;
    fname = new char[strlen(fnm) + 1];
    strcpy(fname, fnm);
    generateId();
}
void Account::setLname(const char* lnm) {
    delete[] lname;
    lname = new char[strlen(lnm) + 1];
    strcpy(lname, lnm);
    generateId();
}
void Account::setMobile(long mb) {
    mobile = mb;
}
void Account::setEmail(const char* em) {
    delete[] email;
    email = new char[strlen(em) + 1];
    strcpy(email, em);
}

// GETTERS
const char* Account::getFname() {
    return fname;
}
const char* Account::getLname() {
    return lname;
}
long Account::getMobile() {
    return mobile;
}
const char* Account::getEmail() {
    return email;
}
const char* Account::getId() {
    return id;
}

void Account::display() {
    cout << "ID : " << id << endl;
    cout << "Name : " << fname << " " << lname << "\t" << "Mobile : " << mobile << endl;
    cout << "Email : " << email << endl;
    //cout << "------------------------" << endl;
}