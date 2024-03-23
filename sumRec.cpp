#include<iostream>
using namespace std;

int getSum(int *arr, int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n ==1)
    {
        return 1;

    }

    int remainingPart = getSum( arr+1 , n-1);
    int sum = arr[0] + remainingPart;

    return sum;
}
int main()
{
    int arr[5] = {11,21,51,101,151};
    int n = 5;

    int sum = getSum(arr, n);

    cout<<"Sum is "<<sum<<endl;

    return 0;
}