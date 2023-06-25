#include<iostream>
using namespace std;

class Room
{
  private:
    int room_number,price;
    char room_type[10], is_AC[10];

    public:

        Room()  // constructor
        {
            cout<<"Enter room number: ";
            cin>>room_number;
            cout<<"Enter price of room: ";
            cin>>price;
            cin.ignore();
            cout<<"Enter room type: ";
            cin.getline(room_type,10);
            cin.ignore();
            cout<<"Is room is AC type or not: ";
            cin.getline(is_AC,10);
        }
};

int main()
{
    Room obj;
    return 0;
}