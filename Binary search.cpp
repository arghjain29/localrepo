#include <iostream>  
using namespace std;  
int main ()  
{  
    
    int arr[10] = {23,34,42,48,58,76,77,86,89,92};
    int low, mid, end, tgt;

    low = 0;  
    end = sizeof(arr) - 1; 
      
 
    cout << " Define a value to be searched from sorted array: " << endl;  
    cin >> tgt;  
      
    while ( low <= end)  
    {  

        mid = ( low + end ) / 2;  
  
        if (arr[mid] == tgt)  
        {  
            cout << " Element is found at index " << (mid);  
            exit (0);   
        }  
        else if ( tgt > arr[mid])  
        {  
            low = mid + 1; 
        }  
          
        else if ( tgt < arr[mid])  
        {  
            end = mid - 1;  
        }  
    }  
    cout << " Number is not found. " << endl;  
    return 0;
}