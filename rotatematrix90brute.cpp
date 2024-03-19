#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2][2]={{1,2},{2,3}};
    int m=2,n=2;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;i++)
        {
            a[j][n-i-1]=a[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;i++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}