// Elements should be in shorted order then only binary search can be used.
// O(log n) time taken in binary search. Hence it is faster than linear search.....
#include<iostream>
using namespace std;
int main()
{
    int A[5]={23, 45, 56, 78, 89};
    int low=0, high=9, key, mid;

    cout<<"Enter key to find in array - ";
    cin>>key;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==A[mid])
        {
            cout<<"Found at index - "<<mid;
            return 0;
        }
        else if (key<A[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<"Key not found"<<endl;
    return 0;

}