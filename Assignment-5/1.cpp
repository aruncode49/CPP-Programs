#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;

    public:
        void set_data(int,int);
        void show_data();
        Complex add(Complex);
        Complex subtract(Complex);
        Complex multiply(Complex);
};

void Complex::set_data(int x, int y){}
void Complex::show_data(){}
Complex Complex::add(Complex c1){}
Complex Complex::subtract(Complex c1){}
Complex Complex::multiply(Complex c1){}

int main()
{
    // In this question we have to only define the following methods.
}