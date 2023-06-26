#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
        void setData()
        {
            cout<<"a=";
            cin>>a;
            cout<<"b=";
            cin>>b;
        }

        void showData()
        {
            cout<<"a="<<a;
            cout<<"b="<<b;
        }

        friend Complex operator -(Complex);
};

Complex operator -(Complex obj)
{
    Complex temp;
    temp.a=-obj.a;
    temp.b=-obj.b;
    return temp;
}

int main()
{
    Complex c1,c2;
    c1.setData();
    c2=-c1;
    c2.showData();
    return 0;
}