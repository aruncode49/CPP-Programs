#include<iostream>
using namespace std;
class fraction
{
    long num,den;
    public:

        fraction(long n, long d) // constructor
        {
            num=n;
            den=d;
        }

        long operator +(fraction obj)
        {
            long x;
            x= (num/den)+(obj.num/obj.den);
            return x;
        }
};

int main()
{
    fraction c1(2455,2234),c2(3456,2345);
    long result;
    result= c1+c2;
    cout<<"sum = "<<result;
    return 0;
}