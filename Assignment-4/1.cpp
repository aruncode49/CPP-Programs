#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;   
    
    public:
        void set_data(int x, int y)
        {
            a=x;
            b=y;
        }

        void show_data()
        {
            cout<<endl<<"a="<<a<<"b="<<b;
        }      
};

int main()
{
    Complex o1;
    o1.set_data(3,4);
    o1.show_data();
    return 0;
}
