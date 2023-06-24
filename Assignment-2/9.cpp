#include<iostream>
using namespace std;

int max_num(int a, int b);
float max_num(float a, float b);

int main()
{
    int x,y;
    float p,q;
    cout<<"Enter two integer number: ";
    cin>>x>>y;
    cout<<"Maximum is "<<max_num(x,y)<<endl;
    cout<<"Enter two real number: ";
    cin>>p>>q;
    cout<<"Maximum is "<<max_num(p,q)<<endl;
    return 0;
}

int max_num(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

float max_num(float p, float q)
{
    if(p>q)
        return p;
    else
        return q;
}