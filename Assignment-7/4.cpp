#include<iostream>
using namespace std;

class Time
{
    int hour,min,sec;

    public:

        // overloading of + operator

        Time operator +(Time obj)
        {
            Time temp;
            temp.hour = hour + obj.hour;
            temp.min = min + obj.min;
            temp.sec = sec + obj.sec;
            return temp;
        }

        // setData function 
        void setData()
        {
            cout<<"hour=";
            cin>>hour;
            cout<<"min=";
            cin>>min;
            cout<<"sec=";
            cin>>sec;
            cout<<endl;
        }

        // showData function 
        void showData()
        {
            cout<<hour<<"hr "<<min<<"min "<<sec<<"sec";
        }
};

int main()
{
    Time c1,c2,c3;
    c1.setData();
    c2.setData();
    c3=c1+c2;
    c3.showData();
    return 0;
}