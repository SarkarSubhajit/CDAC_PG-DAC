#include "SavingAcc.h"
#include "CurrentAcc.h"


class AccountService {
    static Account* arr[100];
    static int count;

    public:
        static Account* acceptData(int j);
        static void displayAll();
        static Account* searchByAccount(const char* inp);
        static Account* searchByName(const char* inp);
        static void sortById();
        static void displaySaving();
        static void displayCurrent();
};