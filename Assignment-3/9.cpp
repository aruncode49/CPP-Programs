#include <iostream>
using namespace std;
void* swap(int a1[], int a2[], int s);
int main()
{
    int i;
    int arr1[5], arr2[5];
    swap(arr1, arr2, 5);

    cout<<"Value in first array = ";
    for(i=0; i<5; i++)
        cout<<arr1[i]<<" ";

    cout<<endl;

    cout<<"Value in second array = ";
    for(i=0; i<5; i++)
        cout<<arr2[i]<<" ";

    return 0;
}

void* swap(int a1[], int a2[], int s)
{
    int i,temp;
    cout<<"Enter value in first array: ";
    for(i=0; i<s; i++)
        cin>>a1[i];
    cout<<"Enter value in second array: ";
    for(i=0; i<s; i++)
        cin>>a2[i];

    for(i=0; i<s; i++)
    {
        temp = a1[i];
        a1[i] = a2[i];
        a2[i] = temp;
    }
    cout<<endl;     
}
