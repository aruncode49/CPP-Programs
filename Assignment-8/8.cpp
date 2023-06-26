#include<iostream>
using namespace std;
class Coordinate
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

        friend Coordinate operator ,(Coordinate, Coordinate);
        
};

Coordinate operator ,(Coordinate x, Coordinate y)
{
    Coordinate temp;
    temp.a= y.a;
    temp.b= y.b;
    return temp;
}


int main()
{
    Coordinate c1,c2,c3;
    c1.setData();
    c2.setData();
    c3=(c1,c2);
    c3.showData();
    return 0;   
}