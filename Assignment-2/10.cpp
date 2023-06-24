#include<iostream>
using namespace std;

int add(int a, int b);
float add(float p, float q);

int main()
{
    int a,b;
    float p,q;
    cout<<"Enter two integer no.: ";
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b)<<endl;
    cout<<"Enter two real no.: ";
    cin>>p>>q;
    cout<<"Sum is "<<add(p,q)<<endl;
    return 0;
}

int add(int a, int b)
{
    return a+b;
}

float add(float p, float q)
{
    return p+q;
}
