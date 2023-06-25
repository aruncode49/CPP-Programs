#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b; // instance variable (real and imaginary)

    public:
        Complex(int x, int y)
        {
            a=x;
            b=y;       
        }

    void show_data()
    {
        cout<<"a="<<a<<" b="<<b;
    }
};

int main()
{
    Complex c1(3,4);
    return 0;
}