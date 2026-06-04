// Program to generate fibonacci series

#include <iostream>
using namespace std;

int main()
{
   int n,a=0,b=1,c;
   cout<<"enter number of terms : ";
   cin>>n;
  cout<<"Fibonacci series upto " << n << "is : " ;
   for(int i=1;i<=n;i++)
   { cout << a << endl;
        c=a+b;
        a=b;
        b=c;
   }
   
    return 0;
}