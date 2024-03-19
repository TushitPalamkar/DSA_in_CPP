#include<bits/stdc++.h>
using namespace std;
int Minimum(int arr[], int n)
{
    int low=0,high=n-1;
    int result=INT_MAX;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[low]<=arr[mid])
        {
            result=min(result,arr[low]);
            low=mid+1;
        }
        else
        {
            result=min(result,arr[mid]);
            high=mid-1;
        }
    }
    return result;
}
int main()
{
    int arr[]={4,5,1,6,7};
    int n=sizeof(arr)/sizeof(int);
    cout<<Minimum(arr,n);
}