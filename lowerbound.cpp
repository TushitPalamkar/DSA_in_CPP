#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,2,5,4,1,7};
    int n=sizeof(arr)/sizeof(int);
    int target=4;
    int low=0;
    int high=n-1;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=target)
        {
            cout<<"Index is :"<<mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

}