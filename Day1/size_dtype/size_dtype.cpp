// display size in bytes for every datatype in C++,(int, short int, long int,char,.... etc)

#include<iostream>
using namespace std;

int main() {
   cout<<"Size of char is : "<< sizeof(char) <<endl;
   cout<<"Size of unsigned char is : "<< sizeof(unsigned char) <<endl;
   cout<<"Size of signed char is : "<< sizeof(signed char) <<endl;
   cout<<"Size of int is : "<< sizeof(int) <<endl;
   cout<<"Size of unsigned int is : "<< sizeof(unsigned int) <<endl;
   cout<<"Size of signed int is : "<< sizeof(signed int) <<endl;
   cout<<"Size of short int is : "<< sizeof(short int) <<endl;
   cout<<"Size of unsigned short int is : "<< sizeof(unsigned short int) <<endl;
   cout<<"Size of signed short int is : "<< sizeof(signed short int) <<endl;
   cout<<"Size of long int is : "<< sizeof(long int) <<endl;
   cout<<"Size of signed long int is : "<< sizeof(signed long int) <<endl;
   cout<<"Size of unsigned long int is : "<< sizeof(unsigned long int) <<endl;
   cout<<"Size of float is : "<< sizeof(float) <<endl;
   cout<<"Size of double is : "<< sizeof(double) <<endl;
   cout<<"Size of long double is : "<< sizeof(long double) <<endl;
   cout<<"Size of wchar_t is : "<< sizeof(wchar_t) <<endl;
   
   return 0;
}
