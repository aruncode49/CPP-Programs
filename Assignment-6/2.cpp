#include<iostream>
using namespace std;

class Customer
{
    private: 

    int cust_id;
    char name[20], email[30];
    int mobile[10];

    public:

    Customer()
    {
      cin>>cust_id;
      for(int i=0; i<=10; i++)
        cin>>mobile[i];       
    }

    Customer(char str[], char str1[])
    {
        for(int i=0; str[i]; i++)
           name[i]=str[i]; 

        for(int i=0; str1[i]; i++)
            email[i]=str1[i];           
    }
};

int main()
{
    Customer c1,c2("ARUN KUMAR", "jangraak008@gmail.com");
    return 0;
}