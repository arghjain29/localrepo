#include <iostream>
using namespace std;
int main()
{
    int num, st, mid, end, tgt;

    cout << "Enter the number of element in array: ";
    cin >> num;
    int arr[num];

    cout << "Enter the Number in Ordered form (inc/dec) ==> " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    st = 0;
    end = num - 1;
    cout << " Define a value to be searched from sorted array: " << endl;
    cin >> tgt;

    while (st <= end)
    {
        mid = (st + end) / 2;

        if (arr[mid] == tgt)
        {
            cout << " Element is found at index " << (mid);
            exit(0);
        }
        else if (tgt > arr[mid])
        {
            st = mid + 1;
        }
        else if (tgt < arr[mid])
        {
            end = mid - 1;
        }
    }
    cout << " Number is not found. " << endl;
    return 0;
}