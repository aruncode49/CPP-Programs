// deep copy

#include<iostream>
using namespace std;
class Array
{
    int *p, size;

    public:

        Array(int x)
        {size=x;}

        void f1(Array obj)
        {
            size = obj.size;
            p = (int *)malloc(4);  // Deep Copy
            *p = *(obj.p);
        }
        void showData()
        {
            cout<<"size="<<size<<" malloc block="<<*p<<endl;
        }
};

int main()
{
    Array c1(2),c2(8);
    c1.f1(c2);
    c1.showData();
    c2.showData();
    return 0;
}