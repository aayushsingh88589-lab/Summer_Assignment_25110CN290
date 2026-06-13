#include<iostream>  
using namespace std;

int main()  
{  
    int n;
    float avg = 0, sum = 0;  
    cout << "Enter the size of the array: ";  
    cin >> n;  
    int arr[n];  //declare an array of size n  
    cout << "Enter " << n << " numbers: ";  
    //input elements into the array  
    for(int i = 0; i < n; i++)  
    {  
        cin >> arr[i];  
    }  
 
    //calculate sum of array elements  
    for(int i = 0; i < n; i++)  
    {  
        sum += arr[i];  
    }  
    avg=sum/n;  //calculate average of array elements
 

    cout << "Sum = " << sum << endl;  
    cout << "Average = " << avg << endl;  

    return 0;  
}