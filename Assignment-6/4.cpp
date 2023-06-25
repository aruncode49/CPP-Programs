#include<iostream>
#include<string.h>
using namespace std;

class Book
{
    private:
    int bookid;
    char title[20];
    float price;

    public:

    Book(int b_id)
    {
        bookid=b_id;
    }
    Book(char t[], int size)
    {
        strcpy(title,t);
    }
    Book(float p)
    {
        price=p;
    }

    void show_bookid()
    {
        cout<<"bookid="<<bookid<<endl;
    }
    void show_title()
    {
        cout<<"title="<<title<<endl;
    }
    void show_price()
    {
        cout<<"price="<<price;
    }
};

int main()
{
    int bid;
    cout<<"Enter book id: ";
    cin>>bid;
    Book c1(bid);
    char t[20];
    cout<<"Enter title: ";
    cin.ignore();
    cin.getline(t,20);
    Book c2(t,20);
    float p;
    cout<<"Enter price of book: ";
    cin>>p;
    Book c3(p);
    c1.show_bookid();
    c2.show_title();
    c3.show_price();
    return 0;
}