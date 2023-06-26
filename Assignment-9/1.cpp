#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    private:
        char name[20];
        int age;
    public:
        Person(char name[], int*);
        void showData();
        ~Person(){};

};

Person::Person(char n[], int *a)
{
    strcpy(name,n);
    age = *a;
}

void Person::showData()
{
    cout<<"age = "<<age;
    cout<<endl;
    cout<<name;
}


int main()
{
    int age=45;
    char name[]="Arun Kumar";
    Person obj(name,&age);
    obj.showData();
    return 0;
}