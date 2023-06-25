#include<iostream>
using namespace std;

class Date
{
    private:
        int date,month,year;

    public:
        void set_date(int d,int m, int y)
        {
            date=d;
            month=m;
            year=y;
        }

        void get_date()
        {
            cout<<endl;
            cout<<"d="<<date<<" m="<<month<<" y="<<year;
        }
};

int main()
{
    Date obj;
    int d,m,y;
    cout<<"Enter date, month and year: ";
    cin>>d>>m>>y;
    obj.set_date(d,m,y);
    obj.get_date();
    return 0;
}