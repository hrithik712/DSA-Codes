#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s <= e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key )
        {
            s = mid + 1;
        }
        else
        {
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int lastOccur(int arr[], int n, int key)
{
    int s=0, e=s-1;
    int mid=s+(s+e)/2;
    int ans = -1;

    while(s <= e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid])
        {
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }

    return ans;
}
int main()
{
    int even[11] = {2,4,5,7,7,7,7,7,7,7,8};
    cout<<"First Occurance 7 is at index  - "<<firstOcc(even, 11, 7)<<endl;

    //int odd[5] = {12, 34, 45, 67, 78};
    cout<<"Last Occurance of 67 is at index - "<<lastOccur(even, 11, 7)<<endl;
    
    return 0;
}