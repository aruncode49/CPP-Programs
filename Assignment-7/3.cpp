#include<iostream>
using namespace std;

class Time
{
    int hour,min,sec;

    public:
    
        // int operator ++()
        // {
        //     return ++sec;
        // }

        void operator ++(int i)
        {
             sec++;
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
    c1++;
    c1.showData();
    return 0;
}