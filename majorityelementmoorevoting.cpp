#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,1,2,3,3,4,4,5,6,6,6,6,6};
    int n=sizeof(a)/sizeof(int);
    int i,el,count=0;
    for(i=0;i<n;i++)
    {
        if(count==0)
        {
            count++;
            el=a[i];
        }
        else if(el==a[i])
        {
            count++;

        }
        else
        {
            count--;
        }
    }
    int maj=0;
    for(i=0;i<n;i++)
    {
        if(el==a[i])
        {
            maj++;
        }
        if(maj>(n/2))
        {
            return maj;
        }
    }
}