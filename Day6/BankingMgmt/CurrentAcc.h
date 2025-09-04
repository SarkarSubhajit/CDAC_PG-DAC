/*
interest rate = 1%
minimum balance 1000
transaction per day
*/
#pragma once
#include "Account.h"

class CurrentAcc: public Account {
    private:
        static double interest;
        static int min_bal;
        long double avg_bal;
        int transaction;
        void update();

    public:
        CurrentAcc();
        CurrentAcc(const char* fnm, const char* lnm, long mb, const char* em, long double bal);
        ~CurrentAcc();

        void setavgBal(long double bal);
        long double getavgBal();
        int getTransaction();
        static double getInterest();
        static int getmin_Bal();

        void display();
};
