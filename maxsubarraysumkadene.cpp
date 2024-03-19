#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(a)/sizeof(int);
    int sum=0,maxi=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum>maxi)
        {
            maxi=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<maxi;
}