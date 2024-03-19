#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][2]={{1,0},{0,1},{1,1}};
    int m=3,n=2;
    int row[m]={0};
    int col[n]={0};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(row[i]==1 or col[j]==1)
            {
                a[i][j]=0;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}