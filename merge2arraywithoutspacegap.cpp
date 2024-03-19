#include<bits/stdc++.h>
using namespace std;
void swaparr(int a[], int i1, int b[], int i2)
{
    if(a[i1]>b[i2])
    {
        swap(a[i1],b[i2]);
    }

}
int main()
{
    int a[]={3,2,4,1};
    int n=sizeof(a)/sizeof(int);
    int b[]={8,7,9,5,6};
    int m=sizeof(b)/sizeof(int);
    int length = m+n;
    int gap= length/2+ length % 2;
    while(gap>0)
    {
        int left=0;
        int right=left+gap;
        while(right<length)
        {
            if(left<n and right>=n)
            {
                swaparr(a,left,b,right-n);
            }
            else if(left>=n)
            {
                swaparr(a,left-n,b,right-n);
            }
            else
            {
                swaparr(a,left,b,right);
            }
            left++;
            right++;
        }
        if(gap==1)
        break;
        gap=gap/2+gap%2;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    for(int i=0;i<m;i++)
    cout<<b[i]<<" ";
}