// accept a number and display table of the number

#include<iostream>
using namespace std;
 
void table(int number) {
    // program to print the table
    for(int i=1;i<=10;i++)
        cout << number << " * " << i << " = " << number*i << endl;
}

int main() { 
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    table(num);
    return 0;
}
