#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,1,2,0,0,2};
    int n=sizeof(a)/sizeof(int);
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(a[mid],a[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}