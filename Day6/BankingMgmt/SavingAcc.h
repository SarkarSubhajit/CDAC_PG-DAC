/*
interest rate = 4%
minimum balance 20000
chequebook number
*/

#include "Account.h"

class SavingAcc: public Account {
    private:
        static double interest;
        static int min_bal;
        long long cheque;
    
    public:
        SavingAcc();
        SavingAcc(const char* fnm, const char* lnm, long mb, const char* em, long long ch);
        ~SavingAcc();
        void setCheque(long long ch);
        long long getCheque();
        static double getInterest();
        static int getmin_Bal();
        void display();
};