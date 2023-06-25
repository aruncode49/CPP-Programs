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

        bool operator <(fraction obj)
        {
            if((num/den)<(obj.num/obj.den))
                return 1;
            else return 0;
        }

};

int main()
{
    fraction c1(35,7),c2(35,5);
    long result;
    result= c2<c1; // c2.operator <(c1);
    cout<<"Result = "<<result;
    return 0;
}