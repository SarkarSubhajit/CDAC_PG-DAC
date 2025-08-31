#include <iostream>
#include "SavingAcc.h"
#include "CurrentAcc.h"

int main() {
    Account ob1("Alan", "Walker", 9876567879, "alanwalker@gmail.com");
    ob1.display();

    SavingAcc ob2("Ken", "Thomson", 4851236597, "kenthomson@gmail.com", 7896558458457854);
    ob2.display();

    CurrentAcc ob3("Barr", "Allen", 6325741895, "barryallen@gmail.com", 84000);
    ob3.display();
    return 0;
}