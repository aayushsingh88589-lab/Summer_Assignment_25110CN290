#include <iostream>
using namespace std;
// function for palindrome  .
 #include<iostream>
using namespace std;
 
   int isPalindrome(int n) ;
   int isPalindrome(int n) 
   {
    int r,rev=0,x=n;
   while(n>0)
   {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
   }
   if(x==rev)
   return 1;
   else
   return 0;
   }
   int main()
 {
    int n;
   
   cout<<"enter any number: ";
   cin>>n;
    if(isPalindrome(n)==1)
    cout<<"the number is a palindrome";
    else
    cout<<"the number is not a palindrome";
    return 0;
 }