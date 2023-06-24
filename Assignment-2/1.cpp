#include <iostream>
using namespace std;
int prime(int);
int main()
{
    int a;
    cout << "Enter a number";
    cin >> a;
    int p = prime(a);
    if (p == 1)
        cout << "Prime";
    else
        cout << "Not Prime";
    return 0;
}

int prime(int n)
{
    int i;
    if (n == 2)
        return 1;
    for (i = 2; i < n/2; i++)
    {
        if (n % i == 0)
            return 0;
        else
            return 1;
    }
}