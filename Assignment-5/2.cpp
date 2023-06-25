#include<iostream>
using namespace std;

class time
{
    int h,m,s;

    public:
        void set_time(int,int,int);
        void show_time();
        void normalize();
        time add(time);
        bool is_greater(time);
};

void time::set_time(int h, int m, int s){}
void time::show_time(){}
void time::normalize(){}
time time::add(time c1){}
bool time::is_greater(time c1){}

int main()
{
    
}