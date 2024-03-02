#include<iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int arr[], int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}
int main()
{
    int even[8] = {5,9,3,5,7,8,10,11};

    int odd[8] = {21,2,45,7,18,1,99,10};

    swapAlternate(even,8);
    swapAlternate(odd, 8);

    printArray(even, 8);
    printArray(odd, 8);

    return 0;
}