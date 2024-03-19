#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,5};
    int i,j;
    int n=5;
    int sum;
    sum=n*(n+1)/2;
    int sum2=0;
    for(i=0;i<n-1;i++)
    {
        sum2=sum2+a[i];
    }
    cout<<"Missing no is: "<<sum-sum2;
    
}