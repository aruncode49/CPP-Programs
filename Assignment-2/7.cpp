#include<iostream>
using namespace std;
inline int add(int a,int b,int c=0);
int main()
{
    int x,y,z,sum;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"sum is "<<add(x,y)<<endl;
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;
    cout<<"sum is "<<add(x,y,z);
    return 0;
}

int add(int a,int b,int c)
{
    return a+b+c;
}