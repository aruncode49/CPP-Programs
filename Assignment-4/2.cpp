#include<iostream>
using namespace std;

class Time
{
    private:
        int hr,min,sec;   
    
    public:
        void set_time(int x, int y, int z)
        {
            hr=x;
            min=y;
            sec=z;
        }

        void display_time()
        {
           cout<<endl;
           cout<<hr<<"hr "<<min<<"min "<<sec<<"sec"; 
        }      
};

int main()
{
    Time time;
    time.set_time(3,45,20);
    time.display_time();
    return 0;
}