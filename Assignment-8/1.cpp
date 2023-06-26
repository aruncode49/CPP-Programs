#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
        friend Test operator +(Test, Test);
        friend Test operator -(Test, Test);
        friend Test operator *(Test, Test);

        void setData(int a,int b)       
        {
            this->a=a;
            this->b=b;
        }

        void showData()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
};

Test operator +(Test obj1, Test obj2)
{
    Test temp;
    temp.a=obj1.a+obj2.a;
    temp.b=obj1.b+obj2.b;
    return temp;
}

Test operator -(Test obj1, Test obj2)
{
    Test temp;
    temp.a=obj1.a-obj2.a;
    temp.b=obj1.b-obj2.b;
    return temp;
}

Test operator *(Test obj1, Test obj2)
{
    Test temp;
    temp.a=obj1.a*obj2.a;
    temp.b=obj1.b*obj2.b;
    return temp;
}

int main()
{
    Test c1,c2,c3;
    c1.setData(8,5);
    c2.setData(4,7);
    cout<<"Addition is: "<<endl;
    c3=c1+c2;
    c3.showData();
    cout<<"Subtraction is: "<<endl;
    c3=c1-c2;
    c3.showData();
    cout<<"Multiplication is: "<<endl;
    c3=c1*c2;
    c3.showData();
    return 0;
}