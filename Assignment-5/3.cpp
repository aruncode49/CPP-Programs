#include<iostream>
using namespace std;

class testresult
{
    private:
        int roll_no,net_score;
        bool right,wrong;

        static int right_weightage;
        static int wrong_weightage;

    public:

        // Function declaration for set data

        void set_rollno(int rn);  // rn= roll no
        void set_net_score(int ns);  // ns= net score    
        bool set_right(int x); // for right
        bool set_wrong(int y); // for wrong
        
        void set_right_weightage();
        void set_wrong_weightage();

        // Function declaration for get data

        void get_rollno(int rn);  // rn= roll no
        void get_net_score(int ns);  // ns= net score    
        bool get_right(int x); // for right
        bool get_wrong(int y); // for wrong
        
        void get_right_weightage();
        void get_wrong_weightage();
};

// Function definition for set data

void testresult::set_rollno(int){}
void testresult::set_net_score(int){}
bool testresult::set_right(int){}
bool testresult::set_wrong(int){}
void testresult::set_right_weightage(){}
void testresult::set_wrong_weightage(){}

// Function definition for get data

void testresult::get_rollno(int){}
void testresult::get_net_score(int){}
bool testresult::get_right(int){}
bool testresult::get_wrong(int){}
void testresult::get_right_weightage(){}
void testresult::get_wrong_weightage(){}