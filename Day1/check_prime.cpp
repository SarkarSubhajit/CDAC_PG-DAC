// To accept a number and display whether the number is prime or not

#include <iostream>
using namespace std;

bool isprime(int n) {
   // takes an integer input and checks whether itss prime or not
   if (n <= 1)
      return false;
   for (int i = 2; i*i <= n; i++) { 
      // sq.root of n is most optimal because if n = a*b then at least one of those has to be less than root n
      if (n%i == 0)
         return false;
   }
   return true;  
}

int main() {
   int number;
   cout << "Enter a Number : ";
   cin >> number;
   if (isprime(number))
      cout << "is a prime" << endl;
   else
      cout << "is not a prime" << endl;
   return 0;
}