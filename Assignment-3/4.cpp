#include<iostream>
using namespace std;
int lcm(int a,int b,int c);

int main()
{
    int a,b,c,result;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    result=lcm(a,b,c);
    cout<<"LCM="<<result;
    return 0;
}

int lcm(int a,int b,int c)
{
    int lcm,i,j;
    if(a>b && a>c)
        lcm=a;
    else if (b>c)
        lcm=b;
    else 
        lcm=c;
        
    for(i=lcm,j=1; ;j++)
    {
        i=lcm*j;
        if(i%a==0 && i%b==0 && i%c==0)
                   return i;
    }

}