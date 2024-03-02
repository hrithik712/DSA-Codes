// O(N) time it takes in linear search..............
#include<iostream>
using namespace std;
int main()
{
    int A[50], n=5, key;

    cout<<"Enter size for Array - ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }   
    cout<<"Enter key to search ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==A[i])              //linear search
        {
            cout<<"Found at index "<<i;
            return 0;
        }
    }
    cout<<"Key not found in array. "<<endl;
    return 0;
}