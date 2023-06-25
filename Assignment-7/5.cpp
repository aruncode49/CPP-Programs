#include<iostream>
using namespace std;

class Matrix
{
    int a[3][3];
    
    public:
        //addition 
        Matrix operator +(Matrix obj)
        {
            int i,j;
            Matrix temp;
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                    temp.a[i][j]=a[i][j]+obj.a[i][j];
            }
            return temp;
        }
        // subtraction
        Matrix operator -(Matrix obj)
        {
            int i,j;
            Matrix temp;
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                    temp.a[i][j]=a[i][j]-obj.a[i][j];
            }
            return temp;
        }

        // multiplication
        Matrix operator *(Matrix obj)
        {
            int i,j,k,sum;
            Matrix temp;
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    for(k=0,sum=0; k<3; k++)                   
                        sum=sum+a[i][k]*obj.a[k][j];
                    temp.a[i][j]=sum;
                }         
            }
            return temp;
        }

        void setData()
        {
            int i,j;
            cout<<"Enter elements in the matrix: ";
            for(i=0; i<3; i++)
                for(j=0; j<3; j++)
                    cin>>a[i][j];
        }

        void showData()
        {
            int i,j;
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};

int main()
{
    Matrix c1,c2,c3;
    c1.setData();
    c2.setData();
    c3=c1+c2;
    cout<<"Addition"<<endl;
    c3.showData();
    c3=c1-c2;
    cout<<"Subtraction"<<endl;
    c3.showData();
    c3=c1*c2;
    cout<<"Multiplication"<<endl;
    c3.showData();
    return 0;
}