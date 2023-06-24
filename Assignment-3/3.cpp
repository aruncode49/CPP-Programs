#include <iostream>
using namespace std;
void rotate(int arr[], int size, int d, int = 1);
int main()
{
    int position, direction, s;
    cout << "Enter size of array: " << endl;
    cin >> s;
    cout << "Enter position for rotation: " << endl;
    cin >> position;
    cout << "Enter '-1' for left or '1' for right rotation:  " << endl;
    cin>>direction;
    int arr[s];
    rotate(arr, s, direction, position);
    return 0;
}

void rotate(int arr[], int size, int d, int n)
{
    int i, temp;
    cout<<"Enter "<<size<<" elements: ";
    for (i = 0; i < size; i++)
        cin >> arr[i];

    // if d is equal to 1 the right direction rotation

    if (d == 1)
    {
        while(n)
        {
            temp = arr[size-1];
            for (i = size - 1; i > 0; i--)
                arr[i] = arr[i - 1];          
            arr[i] = temp;
            n--;
        }
        for(i=0; i<size; i++)
            cout<<arr[i]<<" ";
    }

     // if d is equal to -1 the left direction rotation

    else
    {
        while(n)
        {
            temp = arr[0];
            for (i = 0; i<size-1; i++)
                arr[i] = arr[i + 1];          
            arr[i] = temp;
            n--;
        }
        for(i=0; i<size; i++)
            cout<<arr[i]<<" ";
    }
}