#include<iostream>
using namespace std;
class Time
{
    int *p,a;
    public:

        Time(int x)
        {
            a=x;
        }
                                          
        void showData()
        {
            cout<<"a="<<a<<" p="<<&p<<endl;
        }
};

int main()
{
    Time c1(4),c2(7);
    c1=c2; // shallow copy : in this value of one variable copied into anoter variable and address of another variable also copied in other variable
    c1.showData();
    c2.showData();
    return 0;
}

