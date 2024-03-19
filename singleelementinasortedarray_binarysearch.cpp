#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,1,2,2,3,3,4,5,5};
    int n=sizeof(arr)/sizeof(int);
    int low=1,high=n-2;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]!=arr[mid+1] and arr[mid]!=arr[mid-1])
        {
            cout<<"Index is:"<<mid;
        }
        if((mid%2==0 and arr[mid]==arr[mid+1]) or (mid%2==1 and arr[mid]==arr[mid-1]))
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}