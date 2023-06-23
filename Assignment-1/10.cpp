#include <iostream>
using namespace std;
int main()
{
    int arr[10], sum = 0;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i <= 9; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Sum is " << sum;
    return 0;
}