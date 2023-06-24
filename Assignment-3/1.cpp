#include <iostream>
using namespace std;
void sorting(int arr[], int size, int x);

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    bool x;
    cout << "Press '1' for ascending order sorting or '0' for descending order sorting: ";
    cin >> x;
    int arr[n];
    sorting(arr, n, x);
    return 0;
}

void sorting(int arr[], int size, int x)
{
    int temp, max, min, i, j;
    cout << "Enter " << size << " elements: ";

    for (i = 0; i < size; i++)
        cin >> arr[i];

    if (x)
    {
        for (i = 0; i < size; i++)
        {
            for (j = i+1; j < size; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            cout<<arr[i]<<" ";
        }
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            for (j = i+1; j < size; j++)
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            cout<<arr[i]<<" ";
        }
    }
}