#include<iostream>
using namespace std;

class Student
{
    private:
        int roll_no;
        char name[20];

    public:
        Student() // constructor
        {
            cout<<"Enter student roll no: ";
            cin>>roll_no;
            cin.ignore(); // must for string input
            cout<<"Enter name of the student: ";
            cin.getline(name,20);
        }

        void showData() // function to show our data 
        {
            cout<<"Roll no="<<roll_no;
            cout<<endl;
            cout<<"Name="<<name;
        }
};

int main()
{
    Student c1;
    c1.showData();
    return 0;
}