#include<iostream>
using namespace std;

class Matrix
{
    int a[3][3], b[3][3];

    public:
        Matrix add(Matrix);
        Matrix sub(Matrix);
        Matrix multiply(Matrix);
        Matrix transpose();
        bool is_singular();
};

Matrix Matrix::add(Matrix obj){}
Matrix Matrix::sub(Matrix obj){}
Matrix Matrix::multiply(Matrix obj){}
Matrix Matrix::transpose(){}
bool Matrix::is_singular(){}