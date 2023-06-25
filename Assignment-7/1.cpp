#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;

    public:
        // overloading of + operator
        Complex operator +(Complex obj)    
        {
            Complex temp;
            temp.a= a+ obj.a; // a = c1, obj.a = c2 
            temp.b= b+ obj.b;
            return temp;
        }

        // overloading of - operator 
        Complex operator -()
        {
            Complex temp;
            temp.a= -a;
            temp.b= -b;
            return temp;
        }

        // overloading of * operator
        Complex operator *(Complex obj)
        {
            Complex temp;
            temp.a= a*obj.a;
            temp.b= b*obj.b;
            return temp;
        }

        // overloading of == operator
        bool operator ==(Complex obj)
        {
            if(a==obj.a && b==obj.b)
                return 1;
            else 
                return 0;
        }

        // setData function 
        void setData()
        {
            cout<<"a=";
            cin>>a;
            cout<<"b=";
            cin>>b;
        }

        // showData function 
        void showData()
        {
            cout<<"a="<<a<<" b="<<b;
        }
};

int main()
{
    Complex c1,c2,c3;
    int var;
    c1.setData();
    c2.setData();
    // c3=c1+c2; // c1= caller object & c2= argument object
    // c1=-c1;
    // c2=-c2;
    // c1.showData();
    // cout<<endl;
    // c2.showData();
    // c3=c1*c2;
    // c3.showData();
    var=c1==c2;
    cout<<var;
    return 0;
}