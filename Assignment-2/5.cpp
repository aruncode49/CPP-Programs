#include <iostream>
using namespace std;
int fib(int);
int main()
{
    int x, r;
    cout << "Enter Number: ";
    cin >> x;
    r = fib(x);
    if (r == 1)
        cout << x << " is in Fibonacci Series";
    else
        cout << x << " is not in Fibonacci Series";
    return 0;
}

int fib(int n)
{
    int a, b, c;
    a = 0;
    b = 1;
    c = 0;
    while (c <= n)
    {
        if (n == c)
            return 1;
        c = a + b;      
        a = b;
        b = c;
    }
    return 0;
}