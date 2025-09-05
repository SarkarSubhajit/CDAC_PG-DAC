#include "PhDStudent.h"
#include <iostream>
#include <cstring>
using namespace std;

char PhDStudent::phddegree[] = "Ph.D. DEGREE ACHIEVED!!";
PhDStudent::PhDStudent() {
    thesis = nullptr;
    thmarks = 0;
}

PhDStudent::PhDStudent(int id, const char *nm, const char *addr, int m1, int m2, int m3, const char* th, int thm) : Student(id, nm, addr, m1, m2, m3) {
    thesis = new char[strlen(th) + 1];
    strcpy(thesis, th);
    thmarks = thm;
}
PhDStudent::~PhDStudent() {
    delete[] thesis;
}

void PhDStudent::calculate() {
    int total = Student::getM1() + Student::getM2() + Student::getM3() + thmarks;
    if ((total/4) >= Student::getPassPercent()) {
        cout << "TOTAL % : " << (total/4) << "%" << endl;
        cout << phddegree << endl;
    }
    else {
        cout << "TOTAL %: " << (total/4) << "%" << endl;
        cout << "FAILED!!" << endl;
    }
}

void PhDStudent::setThesis(const char* th) {
    delete[] thesis;
    thesis = new char[strlen(th) + 1];
    strcpy(thesis, th);
}
void PhDStudent::setThMarks(int thm) {
    thmarks = thm;
}
const char* PhDStudent::getThesis() {
    return thesis;
}
int PhDStudent::getThMarks() {
    return thmarks;
}

void PhDStudent::display()
{
    Student::display();
    cout << "THESIS NAME: " << thesis;
    cout << " THESIS MARKS: " << thmarks << endl;
    calculate();
}