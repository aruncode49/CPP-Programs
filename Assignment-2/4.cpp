#include <iostream>
using namespace std;
void pascal(int);
int combi(int n, int r);
int fact(int x);
int main()
{
    int s;
    cout << "Enter number: ";
    cin >> s;
    pascal(s);
    return 0;
}
void pascal(int n)
{
    int i, j, k, b;
    for (i = 1; i <= n; i++)
    {
        k = 1;
        b = 0;
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n + 1 - i && j <= i + n - 1)
            {
                if (k)
                {
                    cout << combi(i - 1, b++);
                    k = 1 - k;
                }
                else
                {
                    cout << " ";
                    k = 1 - k;
                }
            }

            else
                cout << " ";
        }
        cout << endl;
    }
}

int combi(int n, int r)
{
    return fact(n) / fact(n - r) / fact(r);
}

int fact(int x)
{
    int i, f = 1;
    for (i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}