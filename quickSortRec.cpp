#include<iostream>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;;
    // now finding count ...
    for(int i=start+1; i<=end; i++)
    {
        if(arr[i] <= pivot)
        {
            count++;
        }
    }
    // place pivot at right position..
    int pivotIndex = start+count;
    swap(arr[pivotIndex], arr[start]);
    // i aur j j ko sort karna hai ....
    int i = start, j = end;
    while(i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while(arr[i] > pivot)
        {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int start, int end)
{
    // base case ..
    if(start >= end)
    {
        return;
    }
    // partition karenge ..
    int p = partition(arr, start, end);
    // left part sort karenege...
    quickSort(arr, start, p-1);
    // right part sort karenge..
    quickSort(arr, p+1, end);

}
int main()
{
    int arr[5] = {34,21,56,11,10};
    int n = 5;
    quickSort(arr, 0, n-1);

    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
