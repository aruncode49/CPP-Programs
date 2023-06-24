#include<iostream>
using namespace std;
float area(int r);
int area(int l, int b);
float area(float , float);

int main()
{
    int r,l,b;
    float base,height;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Area of circle is "<<area(r)<<endl;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>l>>b;
    cout<<"Area of rectangle is "<<area(l,b)<<endl;
    cout<<"Enter base and height of triangle: ";
    cin>>base>>height;
    cout<<"Area of triangle is "<<area(base,height)<<endl;
    return 0;
}

float area(int r)
{
    return (3.14*r*r);
}

int area(int l, int b)
{
    return l*b;
}
float area( float b,float h)
{
    return (0.5*b*h);
}

