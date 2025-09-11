#include "User.h"

class PremiumUser : public User {
    string coupon;
    double data;

    public:
        PremiumUser();
        PremiumUser(int mon, int lim, double discount, double data, string str);
        ~PremiumUser();

        

        double billing(double data);
        void display();
};