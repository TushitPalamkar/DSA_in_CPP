#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,1,0,4,-1};
    map<int,int>mpp;
    int target= 3;
    int n=sizeof(a)/sizeof(int);
    int sum=0,count=0;
    mpp[0]=1;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(mpp.find(sum-target)!=mpp.end())
        {
            count+=mpp[sum-target];
        }
        mpp[sum]++;
    }
    cout<<count;
}