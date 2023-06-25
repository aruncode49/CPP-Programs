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
        void operator --()
        {         
            --cm;
        }
        void operator --(int x)
        {
            cm--;
        }

};

int main()
{
    Distance c1,c2,c3;
    int res;
    c1.setData();
    c2.setData();
    --c1;
    c2--;
    c1.showData();
    c2.showData();
    return 0;
}