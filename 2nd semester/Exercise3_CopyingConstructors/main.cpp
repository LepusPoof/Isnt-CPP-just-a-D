#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    string bookName;
    string author;
    int publishDate;
    int bookNumber;

    int iterate() {
        cout << "The name of the book: '" << bookName << "'." << endl;
        cout << "The author: " << author << "." << endl;
        cout << "Publish date: " << publishDate << "." << endl;
        cout << "Book number: " << bookNumber << "." << endl;

        return 0;
    };

    Book(string tempName, string tempAuthor, int tempDate, int tempNumber){
        bookName = tempName;
        author = tempAuthor;
        publishDate = tempDate;
        bookNumber = tempNumber;
    };

    Book(const Book &()){
    };

};

int main() {
    Book firstBook("Fables for Robots", "Stanislaw Lem", 1964, 12345678);
    Book secondBook(firstBook);

    cout << "\nThis one is real: \n" << endl;
    firstBook.iterate();
    cout << "\nThis one is copied: \n" << endl;
    secondBook.iterate();

    return 0;
}
