#include<iostream>
using namespace std;
class Distance
{
    int km,m,cm;

    public:
        void setData()
        {
            cout<<"Enter km , m , cm : ";
            cin>>km>>m>>cm;
        }
        void showData()
        {
            cout<<"km="<<km<<" m="<<m<<" cm="<<cm;
        }
        Distance operator +(Distance obj)
        {
            Distance temp;
            temp.km= km+obj.km;
            temp.m= m+obj.m;
            temp.cm= cm+obj.cm;
            return temp;
        }       
};

int main()
{
    Distance c1,c2,c3;
    c1.setData();
    c2.setData();
    c3=c1+c2;
    c3.showData();
    return 0;
}