#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int k)
{
    // base case...
    if(size == 0)
    return false;
    if(arr[0] == k)
    return true;
    // recursive case ........
    else
    {
        bool remainingPart = linearSearch(arr+1, size-1, k);
        return remainingPart;
    }
}
int main()
{
    int arr[5] = {12, 45, 67, 89, 100};
    int size = 5;
    int key;
    cout<<"Enter key to find ? - ";
    cin>>key;
    
    bool ans = linearSearch(arr, size, key);
    if(ans){
        cout<<"Key is found at Index - "<<ans<<endl;
    }
    else
    cout<<"Not Found"<<endl;
    return 0;
}