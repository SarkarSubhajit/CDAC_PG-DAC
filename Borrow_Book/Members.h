/*
int memberId

string email

vector<Book> borrowedBooks

Methods: borrowBook, returnBook, display
*/

#include "Person.h"
#include "Books.h"
#include <vector>
#include <string>
using namespace std;

class Member : public Person {
    int memberId;
    string email;
    vector<Book> borrowedBooks;

    public:
        Member();
        Member(const string& name, int age, int memberId, const string& email);
        ~Member();

        // setters
        void setMemberId(int memberId);
        void setEmail(const string& email);
        //void setBorrowedBooks(const Book& book);

        // setters
        int getMemberId();
        const string& getEmail();
        vector<Book>& getBorrowedBooks();

        void borrowBook(const Book& book);
        void returnBook(int bookId);
        void display();
};