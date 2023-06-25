#include<iostream>
using namespace std;

class testresult
{
    private:
        int data;

    public:
        void set_data();
        void net_score();
};

void testresult::set_data()
{
    cin>>data;
}

void testresult::net_score()
{
    cout<<data<<endl;
}

int main()
{
    testresult obj[5];
    int i;

    for(i=0; i<5; i++)
        obj[i].set_data();

    for(i=0; i<5; i++)
        obj[i].net_score();

    return 0;
}

