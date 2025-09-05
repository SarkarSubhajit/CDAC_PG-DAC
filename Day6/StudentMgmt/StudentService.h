#include "PhDStudent.h"
#include "MScStudent.h"

class StudentService {
    static Student* arr[100];
    static int count;

    public:
        static Student* acceptData(int a);
        static void displayAll();
        static void searchByName(const char* inp);
        static void searchById(int inp);
        static void sortByM1();
        static void displayMsc();
        static void displayPhd();
};