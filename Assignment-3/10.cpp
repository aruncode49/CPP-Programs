    #include<iostream>
    using namespace std;
    void merge_arrays(int arr1[], int arr2[],int s);
    int main()
    {
        int s;
        cout<<"Enter size of array: ";
        cin>>s;
        int arr1[s], arr2[s];
        merge_arrays(arr1, arr2,s);
        return 0;
    }

    void merge_arrays(int arr1[], int arr2[],int s)
    {
        int i,j,k,size;
        cout<<"Enter elements in first array: ";
        for(i=0; i<s; i++)
            cin>>arr1[i];
        cout<<"Enter elements in second array: ";
        for(i=0; i<s; i++)
            cin>>arr2[s];
        size=s+s; // size of new array
        int arr3[size];

        for(k=0, i=0; k<s, i<s; i++, k++)
            arr3[k]=arr1[i];
        for(k=s, i=0; k<size, i<s; i++, k++)
            arr3[k]=arr2[i];
            
        for(i=0; i<size; i++)
            cout<<arr3[i]<<" ";
    }