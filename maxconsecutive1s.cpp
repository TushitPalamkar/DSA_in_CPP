#include<iostream>
using namespace std;
int main()
{
    int a[]={1,1,0,0,0,1,1,1,0,1,1};
    int n=sizeof(a)/sizeof(int);
    int maxn=0;
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
            maxn=max(maxn,count);
        }
        else
        {
            count=0;
        }
    }
    cout<<maxn;
}