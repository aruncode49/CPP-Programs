
#include<iostream>
using namespace std;

class Cuboid
{
    int l, b, h;

    public:

    Cuboid(int x, int y, int z)
    {
        l=x;
        b=y;
        h=z;
    }

    void volume()
    {
        cout<<l*b*h;
    }
};

int main()
{
    Cuboid c1(10,20,30);
    c1.volume();
    return 0;
}