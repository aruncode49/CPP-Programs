#include<iostream>
#include<string.h>
using namespace std;

class Date
{
    private:
        int date,year;
        char month[20];

    public:
        void set_date(int d, char m[], int y)
        {
            date=d;
            strcpy(month,m);
            year=y;
        }

        void get_date()
        {
            cout<<endl;
            cout<<date<<"-"<<month<<"-"<<year;
        }
};

int main()
{
    Date obj;
    int d,y;
    char m[20];
    cout<<"Enter date, month and year: ";
    cin>>d;
    cin.ignore();
    cin.getline(m,20);
    cin>>y;
    obj.set_date(d,m,y);
    obj.get_date();
    return 0;
}