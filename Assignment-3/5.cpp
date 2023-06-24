#include<iostream>
using namespace std;
void prime_factor(int n);
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    prime_factor(x);
    return 0;
}

void prime_factor(int n)
{
    int i;
    for(i=2; i<=n; i++)
    { 
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }          
    }
}