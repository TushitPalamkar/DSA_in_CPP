#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3];
    int n=3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        reverse(a[i],a[i]+n);
    }
}