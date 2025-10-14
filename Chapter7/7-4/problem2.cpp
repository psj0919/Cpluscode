#include <iostream>
using namespace std;


class Book
{

private:
    char * title;
    char * isbn;
    int price;
public:
    Book(char * t, char *i, int p) : price(p)
    {
        this -> title = new char[strlen(t)+1];
        this -> isbn = new char[strlen(i)+1];
        strcpy(this->title, t);
        strcpy(this->isbn, i);
    }
    void showBookInfo()
    {
        cout << title<< endl;
        cout << isbn<< endl;
        cout << price<< endl;
    }
    ~Book()
    {
        delete [] title;
        delete [] isbn;
    }
}
class EBook : public Book
{
private:
    char * DR;
public:
    EBook(char * t, char *i, int p, char * d) : Book(t, i, p)
    {
        DR = new char[strlen(d)+1];
        strcpy(DR, d);
    }
    void showEBookInfo()
    {
        showBookInfo();
        cout << DR << endl;
    }
    ~EBook()
    {
        delete [] DR;
    }
};





int main()
{
    Book book("C++", "555555", 20000);
    book.showBookInfo();

    EBook ebook("C++", "555555", 20000, 'fdx98');
    ebook.showEBookInfo();
    return 0;
}