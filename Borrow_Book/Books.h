/*
int bookId

string title

string author

bool available

Methods: display, markBorrowed, markReturned
*/

#pragma once

#include <string>
#include <vector>
using namespace std;

class Book {
    int bookid;
    string title;
    string author;
    bool available;

    public:
        Book(int bookid, const string& title, const string& author, bool av);
        ~Book();

        // setters
        void setBookid(int bookid);
        void setTitle(const string& title);
        void setAuthor(const string& author);
        void setAvailable(bool av);

        // getters
        int getBookId();
        const string& getTitle();
        const string& getAuthor();
        bool isAvailable();

        void markBorrowed();
        void markReturned();
        void display();
};