#include<iostream>
using namespace std;
int main()
{
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(a)/sizeof(int);
    int i,j,sum;
    int maxi=0;
    for ( i = 0; i < n; i++)
    { 
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+a[j];
            maxi=max(sum,maxi);   
        }
    }
    cout<<maxi;
    
}