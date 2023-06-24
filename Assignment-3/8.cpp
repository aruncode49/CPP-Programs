#include<iostream>
using namespace std;
void print_substring(char str[], int size, int i1, int = 50);
int main()
{
    int i1, i2;
    char str[50];
    print_substring(str, 50, i1,i2);
    return 0;
}

void print_substring(char str[], int size, int i1, int i2)
{
    int i;
    cout<<"Enter your string: ";
    cin.getline(str,50);
    cout<<endl;
    cout<<"Enter starting index: ";
    cin>>i1; cout<<endl;
    cout<<"Enter last index: ";
    cin>>i2; cout<<endl;
    for(i=i1; i<i2; i++)
    {
        cout<<str[i];
    }
}