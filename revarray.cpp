#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int i,j,temp;
    int n=sizeof(a)/sizeof(int);
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}