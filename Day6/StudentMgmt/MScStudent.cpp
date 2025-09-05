#include "MScStudent.h"
#include <iostream>
using namespace std;

char MScStudent::mscdegree[] = "M.Sc. DEGREE ACHIEVED!!";
MScStudent::MScStudent() : spmarks(0), lnmarks(0) {
    // constructor
}

MScStudent::MScStudent(int id, const char *nm, const char *addr, int m1, int m2, int m3, int spmarks, int lnmarks) : Student(id, nm, addr, m1, m2, m3) {
    this->spmarks = spmarks;
    this->lnmarks = lnmarks;
}
MScStudent::~MScStudent() {
    // destructor
}

void MScStudent::calculate() {
    int total = getM1() + getM2() + getM3() + spmarks + lnmarks;
    if ((total/5) >= Student::getPassPercent()) {
        cout << "TOTAL %: " << (total/5) << "%" << endl;
        cout << mscdegree << endl;
    }
    else
        cout << "FAILED!!" << endl;
}

void MScStudent::setSpMarks(int spmarks) {
    this->spmarks = spmarks;
}
void MScStudent::setLnMarks(int lnmarks) {
    this->lnmarks = lnmarks;
}
int MScStudent::getSpMarks() {
    return this->spmarks;
}
int MScStudent::getLnMarks() {
    return this->lnmarks;
}

void MScStudent::display() {
    Student::display();
    cout << "Special SUBJECT MARKS: " << spmarks;
    cout << "LANGUAGE MARKS: " << lnmarks << endl;
    calculate();
}
