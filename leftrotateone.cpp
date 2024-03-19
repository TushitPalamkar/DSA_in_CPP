#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int i,j;
    int temp;
    temp=a[0];
    for(i=1;i<5;i++)
    {
        a[i-1]=a[i];
    }
    a[4]=temp;
    for(j=0;j<5;j++)
    {
        cout<<a[j]<<" ";
    }
}