#include <iostream>
#include <vector>
#include <string>
using namespacce std;
class Book
{
    private:
    string title;
    string author;
    float price;
    string publisher;
    public:
    Book():title(""),author(""),price(0,0),publisher("")()
    Book(string t,string a,float p,string pub):title(t),author(a),price(p),publisher(pub) {}
    bool isMatch(string t,string a)
    {
        return(title == t && author == a);
    }
    void displayBook()
    {
        cout << "book found";
        cout <<"title" <<author << endl;
        cout <<"author" <<author << endl;
        cout <<"publisher" << publisher << endl;
        cout << "price" << price << endl;
    }
};
int main()
{
    vector <book> inventory = 
    {
        Book("C++ programming","Bjarne Stroustrup",499.0,"Pearson"),
        Book("Data Structure","Mark Allen Weiss",399.0,"McGraw Hill"),
        Book("Operating System","Galvin",599.0,"Wiley")
    };
    string searchTitle,searchAuthor;
    cout << "enter book title";
    getline(cin,searchtitle);
    cout <<"enter author name";
    getline(cin,searchAuthor);
    bool found = false;
    for(Book& b : inventory)
    {
        if(b.isMatch(sarchTitle,searchAuthor))
        {
            b.displayBook();
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout << "sorry,the book is not available in the shop";
    }
    return 0;
}

