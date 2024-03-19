#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,1};
    int i,j;
    int count=0,maxi=0;
    int target=3;
    int n=sizeof(a)/sizeof(int);
    for(i=0;i<n;i++)
    {
         int sum=0;
        for(j=i;j<n;j++)
        {
           
            sum=sum+a[j];
            if(sum==target)
            {
                count++;
            }
           
            maxi=max(maxi,count);
        }
        
    }
    cout<<maxi;
}