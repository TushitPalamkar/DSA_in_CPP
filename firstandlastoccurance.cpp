#include<bits/stdc++.h>
using namespace std;
int firstoccur(int arr[],int n, int x)
{
    int first=-1;
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
        high=mid-1;
    }
    return first;
}
int lastoccur(int arr[],int n, int x)
{
    int last=-1;
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
        high=mid-1;
    }
    return last;
}
int main()
{
    int arr[]={1,2,5,5,6,7,5};
    int n=sizeof(arr)/sizeof(int);
    int first=firstoccur(arr,n,5);
    int last=lastoccur(arr,n,5);
    cout<<first<<" "<<last;
    pair<int,int>p;
    
}