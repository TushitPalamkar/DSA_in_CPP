#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={3,2,4,1};
    int n=sizeof(a)/sizeof(int);
    int b[]={8,7,9,5,6};
    int m=sizeof(b)/sizeof(int);
    int left=n-1;
    int right=0;
    while(left>=0 and right<m)
    {
        if(a[left]>a[right])
        {
            swap(a[left],a[right]);
            left--;
            right++;
        }
        else
        break;
    }
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<m;i++)
    {
        cout<<b[i]<<" ";
    }
}