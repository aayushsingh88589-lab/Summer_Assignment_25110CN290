#include<iostream>
using namespace std;

int main() {
     int n,product=1;
     cout << "enter the number: ";
     cin >> n;
     int num=n;
     while(n!=0)
     
     {
        int r=n%10;
       product=product*r;
          n=n/10;
          
     }
     cout<<"product of digit is " << product  << endl;
     
     return 0;
}
