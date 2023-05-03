/*
Q7
A library has multiple books and each book has a title, author, and ISBN number. The library wants to keep track of the books that are currently available and the books that have been borrowed by the members. Design a program using OOPs and class and object to implement this scenario.

For example:

Input	Result
Book Title
"The Alchemist"
Author Name
"Paulo Coelho"
ISBN Number
"978-006231"
*/
#include<iostream>
#include<string>

using namespace std;

class book
{
    private:
    string title;
    string author;
    string isbn;
    bool is_available;

    public:
    void settitle(string new_title){title=new_title;}
    void setauthor(string new_author){author=new_author;}
    void setisbn(string new_isbn){isbn=new_isbn;}
    string gettitle(){return title;}
    string getauthor(){return author;}
    string getisbn(){return isbn;}

    book(string new_title,string new_author,string new_isbn)
    {
        settitle(new_title);
        setauthor(new_author);
        setisbn(new_isbn);
    }
};

int main()
{
    book Alchem={"\"The Alchemist\"","\"Paulo Coelho\"","\"978-006231\""};
    string option{};
    getline(cin,option);
    if(option=="Book Title")
        cout<<Alchem.gettitle()<<endl;
    else if(option=="Author Name")
        cout<<Alchem.getauthor()<<endl;
    else{
        cout<<Alchem.getisbn()<<endl;
    }
    return 0;

}