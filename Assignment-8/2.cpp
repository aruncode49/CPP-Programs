#include<iostream>
using namespace std;
class Time
{
    int a,b;
    public:
        friend istream& operator >>(istream &, Time &);
        friend ostream& operator <<(ostream &, Time);
};

istream& operator >>(istream &din, Time &obj)
{
    din>>obj.a>>obj.b;
    return din;
}

ostream& operator <<(ostream &dout, Time obj)
{
    dout<<"a="<<obj.a<<" b="<<obj.b;   
}

int main()
{
    Time c1;
    cout<<"Enter input in object c1: ";
    cin>>c1;  // operator >>(reference of cin, reference of c1)
    cout<<c1; // operator <<(reference of cout, value of c1)
    return 0;
}

