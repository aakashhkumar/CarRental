    #include<iostream>
    #include<limits.h>

    using namespace std;
    const int n = 3;
    const int m = 3;
    void display(int result[], int n)
    {
    int i;
    for(i = 0; i < n; i++)
    {
    cout << result[i] << " ";
    }
    }

    void maxi_row(int mat[][3], int m, int n)
    {
    int i = 0, j;
    int max = 0;
    int result[m];
    while (i < m)
    {
    for ( j = 0; j < n; j++)
    {
    if (mat[i][j] > max)
    {
    max = mat[i][j];
    }
    }
    result[i] = max;
    max = 0;
    i++;

    }
    display(result, m);
    }

    void mini_row(int mat[][3], int m, int n)
{
int i = 0, j;
int min = INT_MAX;
int result[m];
while (i < m)
{
for ( j = 0; j < n; j++)
{
if (mat[i][j] < min)
{
min = mat[i][j];
}
}
result[i] = min;
min = INT_MAX;
i++;

}
display(result, m);
}
    int main()
    {
    int i, j;
    int mat1[m][n];
    for(i = 0; i < m; i++)
    {
    for(j = 0; j < n; j++)
    cin >> mat1[i][j];
    }
    cout<<endl;
    cout<<"Maximum number from each rows :";
    maxi_row(mat1,m,n);
    cout<<endl;
    cout<<"Minimum number from each rows :";
    mini_row(mat1,m,n);
    return 0;
    }