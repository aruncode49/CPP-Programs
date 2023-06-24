#include <iostream>
using namespace std;
int power(int x, int y); //function declaration
int main()
{
    int a, b, c;
    cout<<"Enter Number: ";
    cin>>a;
    cout<<"Enter Power: ";
    cin>>b;
    c = power(a,b); //function call
    cout << "Power is " << c;
    return 0;
}

int power(int x, int y) // function definition
{
    int p = 1;
    for (int i = 1; i <= y; i++)
    {
        p = x * p;
    }
    return p;
}