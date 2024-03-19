#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={6,2,9,5,1};
    int n=sizeof(arr)/sizeof(int);
    int target=7;
    int low=0,high=n-1,ans=-1;
    sort(arr,arr+n);
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<=target)
        {
            ans=arr[mid];
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<ans;
}