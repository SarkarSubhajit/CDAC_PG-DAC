#include "User.h"

class BasicUser : public User {
    double data;

    public:
        BasicUser();
        BasicUser(int mon, int lim, double discount, double data);
        ~BasicUser();

        

        double billing(double data);
        void display();
};