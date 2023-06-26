#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int*, int*);
        void showData();
};

void Complex::setData(int*x, int*y)
{
    a=*x;
    b=*y;
}

void Complex::showData()
{
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
}

void fun()
{
    Complex *p;
    int m,n;
    cin>>m>>n;
    p = new Complex;
    p->setData(&m,&n);
    p->showData();
}

int main()
{
    fun();
    return 0;
}