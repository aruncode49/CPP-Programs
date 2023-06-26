#include<iostream>
using namespace std;
class Array
{
    int a[5],b[5];

    public:

    void setData()
    {
        cout<<"Enter elemnts in first array: ";
        for(int i=0; i<5; i++)
            cin>>a[i];
        cout<<"Enter elemnts in second array: ";
        for(int i=0; i<5; i++)
            cin>>b[i];
    }

    friend void operator +(Array, Array);

};

void operator +(Array obj1, Array obj2)
{
    Array temp;
    for(int i=0; i<10; i++)
    {
        if(i<5)
        {
            temp.a[i]=obj1.a[i];
        }
        else
        {

        }
    }

}

int main()
{
    Array c1,c2;
    c1.setData();
    c2.setData();
    c1+c2; // operator+(c1,c2)  c1= {a[5],b[5]}  c2= {a[5],b[5]}
    return 0;
}