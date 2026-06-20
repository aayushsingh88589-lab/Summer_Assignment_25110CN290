#include<iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], c[10][10], m, n, p, q, i, j, k;
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> m >> n;
    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> p >> q;
    if (n != p)
    {
        cout << "Incompatible matrix dimensions" << endl;
        return 1;
    }
    cout << "Enter the elements of the first matrix: " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of the second matrix: " << endl;
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "The product of the two matrices is: " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}