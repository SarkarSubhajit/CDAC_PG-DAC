#include "LibraryService.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<Member> LibraryService::members;
vector<Book> LibraryService::books;

void LibraryService::addMember() {
    string name, email;
    int age, memberId;
    cout << "Enter Name: ";
    cin.ignore(1000, '\n');
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter MemberID: ";
    cin >> memberId;
    cout << "Enter Email: ";
    cin.ignore(1000, '\n');
    getline(cin, email);

    members.push_back(Member(name, age, memberId, email));
}
void LibraryService::addBook() {
    int bookid;
    string title;
    string author;
    bool available;
    cout << "Enter BookID: ";
    cin >> bookid;
    cout << "Enter Title: ";
    cin.ignore(1000, '\n');
    getline(cin, title);
    cout << "Enter Author: ";
    //cin.ignore(1000, '\n');
    getline(cin, author);
    available = true;

    books.push_back(Book(bookid, title, author, available));
}
void LibraryService::borrowBooks(int memberId, int bookid) {
    for (auto& m : members) {
        if (m.getMemberId() == memberId) {
            for (auto& b : books) {
                if (b.getBookId() == bookid && b.isAvailable()) {
                    b.markBorrowed();
                    m.borrowBook(b);
                }
            }
        }
    }
}
void LibraryService::returnBooks(int memberId, int bookid) {
    for (auto& m : members) {
        if (m.getMemberId() == memberId) {
            for (auto& b : books) {
                if (b.getBookId() == bookid) {
                    m.returnBook(b.getBookId());
                    b.markReturned();
                }
            }
        }
    }
}
void LibraryService::displayAll() {
    for (auto& m : members)
        m.display();
    cout << "---------------------" << endl;
}
void LibraryService::displayBooks() {
    for (auto& b : books)
        b.display();
}