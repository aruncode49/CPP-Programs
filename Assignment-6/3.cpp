#include<iostream>
using namespace std;

class Time
{
    private: 
    int hr,min,sec;

    public:

    Time(int h, int m, int s)
    {
        hr=h;
        min=m;
        sec=s;
    }
};

int main()
{
    Time c1(3,34,45);
    return 0;
}