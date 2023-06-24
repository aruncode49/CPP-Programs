#include<iostream>
using namespace std;
void swap (int*, int*);
int main()
{
    int a,b;
    cout<<"Value of a is: ";
    cin>>a;
    cout<<"Value of b is: ";
    cin>>b;
    swap(&a,&b); //call by reference
    return 0;
}
void swap(int *p,int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    cout<<"a is "<<*p<<endl;
    cout<<"b is "<<*q;
}