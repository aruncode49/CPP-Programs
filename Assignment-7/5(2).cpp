#include<iostream>
using namespace std;
class Numbers
{
    int x,y,z;

    public:

        Numbers(){}
        Numbers(int a, int b, int c)
        {
            x=a;
            y=b;
            z=c;
        }

        Numbers operator -()
        {
            Numbers temp;
            temp.x= -x;
            temp.y= -y;
            temp.z= -z;
            return temp;
        }
        void showData()
        {
            cout<<"x="<<x<<" y="<<y<<" z="<<z;
        }
};

int main()
{
    Numbers obj(3,4,5),res;
    res=-obj;
    res.showData();
    return 0;   
}