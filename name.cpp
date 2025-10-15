#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int year;

    void print()
    {
        cout << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
        cout << endl;
    }

    Book(string t, string a, int y)
    {
        title = t;
        author = a;
        year = y;
        cout << "Object has been created" << endl;
    }

    Book()
    {
        title = "Mertvie dyshi";
        author = "Nikolay Gogol";
        year = 1960;
    }

    bool isOld()
    {
        if (year <= 1975)
        {
            cout << "Book is older(((" << endl;
            return true;
        }
        else
        {
            cout << "Book is new)" << endl;
            return false;
        }
    }
};

int main()
{
    string title, author;
    int year;

    cout << "Enter title: ";
    getline(cin, title);

    cout << "Enter author: ";
    getline(cin, author);

    cout << "Enter year: ";
    cin >> year;

    Book book1(title, author, year);
    Book book2("Voyna i myr", "Lev Tolstoy", 1974);
    Book book3;

    book1.print();
    book2.print();
    book3.print();

    cout << endl;
    book1.isOld();

    cout << endl;
    book2.isOld();

    cout << endl;
    book3.isOld();

    return 0;
}
