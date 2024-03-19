#include<bits/stdc++.h>
using namespace std;
int SearchRotatedSorted(int arr[],int n,int target)
{
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target)
        return mid;
        if(arr[low]<=arr[mid])
        {
            if(arr[low]<=target and target<=arr[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else
        {
            if(arr[mid]<=target and target<=arr[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
}
int main()
{
    int arr[]={1,2,3,9,8,7,4};
    int n=sizeof(arr)/sizeof(int);
    int target=8;
    int ans=SearchRotatedSorted(arr,n,target);
    cout<<ans;
}