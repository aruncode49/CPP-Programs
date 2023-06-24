#include<iostream>
using namespace std;
int hcf(int a, int b);
int main()
{
    int x,y,result;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    result=hcf(x,y);
    cout<<"HCF="<<result;
    return 0;
}

int hcf(int a, int b)
{
    int hcf;
    for(hcf=a<b?a:b; hcf>=1; hcf--)
        if(a%hcf==0 && b%hcf==0)
            return hcf;    
}