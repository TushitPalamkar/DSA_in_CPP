#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={1,2,3,4};
    int n=arr.size();
    int low=0;
    int high=n-1;
    int target=3;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target)
        return true;
        if(arr[low]==arr[mid] and arr[mid]==arr[high])
        {
            low++;
            high--;
            continue;
        }
        if(arr[low]<=arr[mid])
        {
            if(arr[low]<=target and target<=arr[mid])
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<=target and target<=arr[high])
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return false;
}