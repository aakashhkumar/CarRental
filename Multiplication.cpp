#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number :" << endl;

    cin >> n;
    cout << "Multiplication table for " << n << " : " << endl;

    for (int i = 1; i < 11; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}
