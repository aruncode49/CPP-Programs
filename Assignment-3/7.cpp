#include<iostream>
using namespace std;

int volume(int l, int b, int h);
float volume(int r, int h);
float volume(int r);

int main()
{
    int l,b,h,r;
    cout<<"Enter length, breadth and height of cuboid: "<<endl;
    cin>>l>>b>>h;
    cout<<"Volume="<<volume(l,b,h)<<endl;
    cout<<"Enter radius and height of cone: "<<endl;
    cin>>r>>h;
    cout<<"Volume="<<volume(r,h)<<endl;
    cout<<"Enter radius of sphere: "<<endl;
    cin>>r;
    cout<<"Volume="<<volume(r)<<endl;
    return 0;   
}

// for volume of cuboid= l*b*h
int volume(int l, int b, int h)
{
  float result;  
  result= l*b*h;
  return result;
}

// for volume of cone= (pi*r*r*h)/3
float volume(int r, int h)
{
     float result; 
     result = (3.14*r*r*h)/3;
     return result;
}

// for volume of sphere= (4/3)*pi*r*r*r
float volume(int r)
{
     float result; 
     result= (4*3.14*r*r*r)/3;
     return result;
}