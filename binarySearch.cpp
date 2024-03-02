#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid=start+(end-start)/2;

    while (start <= end)
    {
        if(arr[mid] == key )
        {
            return mid;
        }
        // goto right wala part
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid -1;
        }

        mid = start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int even[6] = {12,34,56,76,88,99};

    int odd[6] = {23,45,56,67,78,89};

    int oddindex = binarySearch(odd, 6, 45);

    cout<<"Index of 45 is - "<<oddindex <<endl;

    int evenIndex = binarySearch(even, 6, 99);

    cout<<"Index of 99 is - "<<evenIndex<<endl;
    return 0;
}