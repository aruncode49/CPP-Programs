#include<iostream>
using namespace std;
class Integer
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
            cout<<endl;
        }

        friend Integer operator !(Integer);
        friend bool operator ==(Integer, Integer);
};

Integer operator !(Integer x)
{
    Integer temp;
    temp.a=-x.a;
    temp.b=-x.b;
    return temp;
}

bool operator ==(Integer x, Integer y)
{
    if(x.a==y.a && x.b==y.b)
        return 1;
    else 
        return 0;
}

int main()
{
    Integer c1,c2,c3; int res;
    c1.setData();
    c2.setData();
    c3=!c1;
    c3.showData();
    c3=!c2;
    c3.showData();
    res = c1==c2;
    cout<<"Result="<<res;
    return 0;
}