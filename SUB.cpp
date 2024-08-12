#include<iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;

    cout<<"Enter the first matrix\n";
    for(i=0;i <3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>> a[i][j];
        }
    }
    cout<<"Enter the second matrix\n";
    for(i=0;i <3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>> b[i][j];
        }
    }
    cout<<"Subtraction of matrices A & B is\n";
    for(i=0;i <3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            cout<< c[i][j] << " ";
        }
        cout<<"\n";
    }
    cout<<"Addition of matrices A & B is\n";
    for(i=0;i <3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout<< c[i][j] << " ";
        }
        cout<<"\n";
    }
    cout<<"Multiplication of matrices A & B is\n";
    for(i=0;i <3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
            cout<< c[i][j] << " ";
        }
        cout<<"\n";
    }
}