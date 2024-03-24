#include<iostream>
#include<math.h>
using namespace std;
int pow1(int m,int n)
{
    if(m>n)
    return 1;
    else
    return pow1(m,n-1);
}
int pow2(int m, int n)
{
    if(n==0)
    return 1;
    if(n%2==0)
    return pow2(m*m, n/2);
    else
    return m*pow2(m*m,(n-1)/2);
}
int main()
{
    int r1,r2;
    r1=pow1(5,10);
    r2=pow2(23,123);
    cout<<r1<<endl;
    cout<<r2<<endl;
    return 0;
}
