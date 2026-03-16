#include <iostream>
using namespace std;

class Library
{
    string address;
    string libraryName;
    int totalBooks;

protected:
    Library() {}
    Library(string address, string libraryName, int totalBooks)
    {
        this->address = address;
        this->libraryName = libraryName;
        this->totalBooks = totalBooks;
        cout << "Library Class Initialised Successfully...\n";
    }

    void showLibraryinfo()
    {
        cout << "Libray Name : " << libraryName << endl;
        cout << "Address : " << address << endl;
        cout << "Total Books : " << totalBooks << endl;
    }
};

class Book : virtual protected Library
{
    string title;
    string author;
    string isbn;
    int pages;

protected:
    Book(string title, string author, string isbn, int pages)
    {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
        this->pages = pages;
        cout << "Book Class Initialised Successfully..\n";
    }

    void showBookinfo()
    {
        cout << "Title : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "ISBN : " << isbn << endl;
        cout << "Pages : " << pages << endl;
    }
};

class Member : virtual protected Library
{
    string memberName;
    int memberId;
    int borrowCount;

protected:
    Member(string memberName, int memberId, int borrowCount)
    {
        this->memberName = memberName;
        this->memberId = memberId;
        this->borrowCount = borrowCount;
        cout << "Member Class Initialised Successfully...\n";
    }

    void showMemberinfo()
    {
        cout << "Member Name : " << memberName << endl;
        cout << "Member Id : " << memberId << endl;
        cout << "Borrow Count : " << borrowCount << endl;
    }
};

class BorrowTransaction : protected Book, protected Member
{
    string borrowDate;
    string returnDate;
    int fineAmount;

public:
    BorrowTransaction(string address, string libraryName, int totalBooks, string title, string author, string isbn, int pages, string memberName, int memberId, int borrowCount, string borrowDate, string returnDate, int fineAmount) : Library(address, libraryName, totalBooks), Book(title, author, isbn, pages), Member(memberName, memberId, borrowCount)
    {
        this->borrowDate = borrowDate;
        this->returnDate = returnDate;
        this->fineAmount = fineAmount;

        cout << "BorrowTransaction Class Initialised Successfully..\n";
    }

    void showTransaction()
    {
        showLibraryinfo();
        showBookinfo();
        showMemberinfo();
        cout << "Borrow Date : " << borrowDate << endl;
        cout << "Return Date : " << returnDate << endl;
        cout << "Fine Amount : " << fineAmount << endl;
    }
};

int main()
{
    BorrowTransaction bt("XYZ Road", "Central Library", 500, "Harry Putter", "Shyam Sharma", "L123H", 320, "Prabhas", 1001, 3, "25-01-2026",
                         "25-02-2026", 120);
    bt.showTransaction();
    return 0;
}