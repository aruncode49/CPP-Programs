#include<iostream>
using namespace std;

class Circle
{
    int radius;

    public:
        int set_radius(int x){radius=x;}

        int get_radius()
        {
            cout<<"radius="<<radius<<endl;
        }

        float area()
        {
            return (3.14 * radius * radius);
        }

        float circumference()
        {
            return (2 * 3.14 * radius);
        }        
};

int main()
{
    Circle obj;
    int r;
    float area,circumference;
    cout<<"Enter radius: ";
    cin>>r;

    obj.set_radius(r);
    obj.get_radius();
    area=obj.area();
    cout<<"area="<<area<<endl;
    circumference=obj.circumference();
    cout<<"circumference="<<circumference<<endl;
    return 0;

}