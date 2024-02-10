#include<iostream>
using namespace std;

int main() {
    int size = 10;
    int num;
    bool T = false;
    
    
    int arr[size];
     cout<<"Enter number"<<endl;
    for(int i = 0; i < size; i++){
          cin>> arr[i];
    }
    
    cout<<"Enter the number you want to search "<<endl;
    cin>> num;
    
    for(int i = 0; i<size; i++){
        if(num == arr[i]){
            cout<<"Number found on index "<<i<<endl;
        T = true;}
    }
    
    if(!T){
        cout<<"Number not present "<<endl;
    }
    return 0;
}
