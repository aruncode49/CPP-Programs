#include<iostream>
using namespace std;

class Date
{
    private:
        int d,y;
        char m[10];

    public:
        Date():d(3),y(2019),m("may")
        {}

        void showData()
        {
            cout<<d<<" "<<m<<" "<<y;
        }
};

int main()
{
    Date c1;
    c1.showData();
    return 0;
}