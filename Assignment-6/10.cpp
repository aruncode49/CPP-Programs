#include<iostream>
using namespace std;

class Circle
{
    private: 
        int radius;
        float radius;

    public:
        Circle()
        {
            cout<<"Enter radius: ";
            cin>>radius;
        }

        Circle(float r)
        {
            radius = r;
        }
};

int main()
{
    Circle obj, obj(4.5);
    return 0;
}
