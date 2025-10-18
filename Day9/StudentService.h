#pragma once
#include <map>
#include "Student.h"
using namespace std;

class StudentService {
    static map<int, Student> students;

public:
    static void addStudent();
    static void displayAll();
    static void searchByRoll(int roll);
    static void displayByCity(const string& city);
};