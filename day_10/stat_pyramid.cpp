#include <iostream>
using namespace std;

int main()
{
    int i, j;
// Outer loop controls rows.

    for(i = 1; i <= 5; i++)
    {
        //inner loops first print spaces to shift stars right.
         for(int space=4;space>=i;space--)
         {
              cout<<" ";
         }
        for(j = 1; j <= i; j++)
        //print stars with spaces to form a pyramid.
        {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}