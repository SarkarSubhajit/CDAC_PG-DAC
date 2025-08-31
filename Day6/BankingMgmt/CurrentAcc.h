/*
interest rate = 1%
minimum balance 1000
transaction per day
*/
#include "Account.h"

class CurrentAcc: public Account {
    private:
        static double interest;
        static int min_bal;
        double avg_bal;
        int transaction;
        void update();

    public:
        CurrentAcc();
        CurrentAcc(const char* fnm, const char* lnm, long mb, const char* em, double bal);
        ~CurrentAcc();

        void setavgBal(double bal);
        double getavgBal();
        int getTransaction();
        static double getInterest();
        static int getmin_Bal();

        void display();
};