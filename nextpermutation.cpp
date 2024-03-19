#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,3,5,4,1,0,0};
    int n=sizeof(a)/sizeof(int);
    int index=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]<a[i+1])
        {
            index=i;
            break;
        }
    }
    for(int i=n-1;i>index;i--)
    {
        if(a[i]>a[index])
        {
           swap(a[i],a[index]);
           break;
        }
    }
    reverse(a+index+1,a+n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}